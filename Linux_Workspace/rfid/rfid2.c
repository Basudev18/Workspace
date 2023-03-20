#include <unistd.h> 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
#include<errno.h>
#include<stdint.h>
#include<sys/time.h>
#include<sys/select.h>
#include<termios.h>

int main() 
{       	
  char data[20];
  int fd;
  fd = open("/dev/ttyUSB3", O_RDWR );
	if(fd == -1)
	{
		printf("unable to create file");
	}
	else
	{
		printf("file created successfully");
	}

  struct termios tty;

  tcgetattr(fd,&tty);
  tty.c_iflag &= ~(IXON | IXOFF | IXANY);
  tty.c_oflag &= ~OPOST;
  tty.c_lflag &= ~(ICANON |ECHO | ECHOE | ECHONL  | ISIG ); 
  tty.c_cflag &= ~(CSIZE | PARENB);
  tty.c_cflag &= ~CRTSCTS;
  tty.c_cflag |= CS8;
  tty.c_cflag |= (CREAD | CLOCAL);
  tty.c_cflag |= B9600;
  tty.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR|ICRNL); 
  tty.c_cc[VMIN] = 0;
  tty.c_cc[VTIME] = 0;
  tty.c_cflag &= ~CSTOPB;
  tcsetattr(fd,TCSANOW, &tty);
  
  while(1)
  {
    printf("\n Waiting for message...\n");
    sleep(3);
    read(fd,data,sizeof(data));
    if(data > 0)
    {
	    printf("\nReceived %d bytes\n",data);
            for(int i=0;i<20;i++)
	        {
                 printf("%c",data[i]);
                }
    }
    else
    {
      printf("No data read");
    }
    memset(data,0,sizeof(data));
    sleep(1);
  }
  close(fd);
  return 0; 
}
