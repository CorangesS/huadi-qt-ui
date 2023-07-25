/***********************************
 *@copyright  :csc
 *description :Use adc and photoresistor to complete the light, the
					 LED light is on when it is dark, and the LED light is off when it is bright 
 *filename    :main.c
 *author      :csc,syf,xkq,fzy,zmc
 *phone       :18874975755
 *version     :0.1
 *date        :2023.07.04
************************************/
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
typedef unsigned char uint8_t;
int set_opt(int,int,int,char,int);
void SYN_FrameInfo(int fd, uint8_t Music, uint8_t* HZdata);

int main( int argc, char *argv[])
{
	if(argc!=2)
	{
		printf("Input error!!!Please input 2 parameter!!!");
		return 0;
	}
	
	int a = atoi(argv[0]);

	int fd,nByte;
	char *uart3 = "/dev/ttySAC0";
	char buffer[512];
	char *uart_out = "please input\r\n";
	memset(buffer, 0, sizeof(buffer));
        printf("Ready to Init Uart0!");
	if((fd = open(uart3, O_RDWR|O_NOCTTY))<0)
		printf("open %s is failed!",uart3);
	else
	{
        printf("open %s is successfully!",uart3);
		set_opt(fd, 9600, 8, 'N', 1);
		//SYN_FrameInfo(fd, 0, "打雷了，大家快收衣服，倍儿爽，爽爽");
		if(a==0)
		{
			SYN_FrameInfo(fd, 0, "警报警报警报警报警报警报警报警报警报警报警报警报");
		}
		if(a==1)
		{
			SYN_FrameInfo(fd, 0, "商周昆虫动物玉牌线条流畅工艺精湛");
		}
		if(a==2)
		{
			SYN_FrameInfo(fd, 0, "古蜀时期太阳神鸟金饰,有复杂镂空图案齿状光芒");
		}
		if(a==3)
		{
			SYN_FrameInfo(fd, 0, "商周大金面具,立体脸谱锤蝶成行，剪切工艺具有重大历史艺术价值");
		}
		//SYN_FrameInfo(fd, 0, "警报警报警报警报警报警报警报警报警报警报警报警报");
    }
	
}

int set_opt(int fd,int nSpeed, int nBits, char nEvent, int nStop)
{
	struct termios newtio,oldtio;
	if  ( tcgetattr( fd,&oldtio)  !=  0) { 
		perror("SetupSerial 1");
		return -1;
	}
	bzero( &newtio, sizeof( newtio ) );
	
	newtio.c_cflag  |=  CLOCAL | CREAD;
	
	newtio.c_cflag &= ~CSIZE;

	switch( nBits )	
	{
		case 5:
		      newtio.c_cflag |=CS5;
			  break; 
		case 6:
		      newtio.c_cflag |=CS6;
			  break; 
		case 7:
			newtio.c_cflag |= CS7;
			break;
		case 8:
			newtio.c_cflag |= CS8;
			break;
	}

	switch( nEvent )
	{
	case 'O':
		newtio.c_cflag |= PARENB;
		newtio.c_cflag |= PARODD;
		newtio.c_iflag |= (INPCK | ISTRIP);
		break;
	case 'E': 
		newtio.c_iflag |= (INPCK | ISTRIP);
		newtio.c_cflag |= PARENB;
		newtio.c_cflag &= ~PARODD;
		break;
	case 'N':  
		newtio.c_cflag &= ~PARENB;
		newtio.c_iflag &= ~INPCK;
		newtio.c_iflag &= ~ISTRIP;
		break;
	}

	switch( nSpeed )
	{
		case 2400:
			cfsetispeed(&newtio, B2400);
			cfsetospeed(&newtio, B2400);
			break;
		case 4800:
			cfsetispeed(&newtio, B4800);
			cfsetospeed(&newtio, B4800);
			break;
		case 9600:
			cfsetispeed(&newtio, B9600);
			cfsetospeed(&newtio, B9600);
			break;
		case 115200:
			cfsetispeed(&newtio, B115200);
			cfsetospeed(&newtio, B115200);
			break;
		case 460800:
			cfsetispeed(&newtio, B460800);
			cfsetospeed(&newtio, B460800);
			break;
		default:
			cfsetispeed(&newtio, B9600);
			cfsetospeed(&newtio, B9600);
			break;
	}
	if( nStop == 1 )
		newtio.c_cflag &=  ~CSTOPB;
	else if ( nStop == 2 )
		newtio.c_cflag |=  CSTOPB;
		
		newtio.c_cc[VTIME]  = 0;
		newtio.c_cc[VMIN] = 0;
		
		tcflush(fd,TCIOFLUSH);
		
	if((tcsetattr(fd,TCSANOW,&newtio))!=0)
	{
		perror("com set error");
		return -1;
	}
	
	//	printf("set done!\n\r");
	return 0;
}


void SYN_FrameInfo(int fd, unsigned  char Music, unsigned  char *HZdata)
{
	/****************需要发送的文本**********************************/
	unsigned  char  Frame_Info[200]; 		//定义帧信息数组
	unsigned  char  HZ_Length;
	unsigned  char  ecc = 0;  			//定义校验字节
	unsigned  int i = 0;
	HZ_Length = strlen(HZdata); 			//需要发送文本的长度

	/*****************帧固定配置信息**************************************/
	Frame_Info[0] = 0xFD; 			//构造帧头FD
	Frame_Info[1] = 0x00; 			//构造数据区长度的高字节
	Frame_Info[2] = HZ_Length + 3; 		//构造数据区长度的低字节
	Frame_Info[3] = 0x01; 			//构造命令字：合成播放命令		 		 
	Frame_Info[4] = 0x01 | Music << 4;  //构造命令参数：背景音乐设定

	/*******************校验码计算***************************************/
	for (i = 0; i < 5; i++)   				//依次发送构造好的5个帧头字节
	{
		ecc = ecc ^ (Frame_Info[i]);		//对发送的字节进行异或校验	
	}

	for (i = 0; i < HZ_Length; i++)   		//依次发送待合成的文本数据
	{
		ecc = ecc ^ (HZdata[i]); 				//对发送的字节进行异或校验		
	}
	/*******************发送帧信息***************************************/
	memcpy(&Frame_Info[5], HZdata, HZ_Length);//
	Frame_Info[5 + HZ_Length] = ecc;
	write(fd, Frame_Info, 5 + HZ_Length + 1);
	//PrintCom(Frame_Info, 5 + HZ_Length + 1);
}