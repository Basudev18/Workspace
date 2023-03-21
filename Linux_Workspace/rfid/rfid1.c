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
int main(int argc,char* argv[])
{
     int rv,s;
     char buffer[260],data[260];
     int rdlen,wlen,length = 0,i;
     struct termios my_termios,new_termios,stdio;
     fd_set rfd;
     struct timeval tv, *p_tv;
     int fd = open("/dev/ttyUSB2",O_RDWR | O_NDELAY | O_EXCL);
     if(fd == -1)
        {
                printf("Unable to create");
        }
        else
        {
                 printf("File created Successfully");

        }

   /*  if (fd == -1)
     {
             printf("\n Unable to open file %d\n",fd);
             return -1;
     }*/
     tcgetattr(fd, &my_termios);
     my_termios.c_iflag &= ~(IXON | IXOFF | IXANY);
     my_termios.c_oflag &= ~OPOST;
     my_termios.c_lflag &=~(ECHO | ECHOE | ICANON | ISIG | PENDIN);
     my_termios.c_cflag &=~(CSIZE | PARENB);
     my_termios.c_cflag &=~CRTSCTS;
     my_termios.c_cflag |=~CS8 | CLOCAL | CREAD;
     my_termios.c_cflag &=~CBAUD;
     my_termios.c_cflag |= B9600;
     my_termios.c_cc[VMIN]= 0;
     my_termios.c_cc[VTIME]= 0;
     rv = tcsetattr(fd,TCSANOW, &my_termios);
     tcgetattr(fd, &new_termios);
     fcntl(STDIN_FILENO, F_SETFL, O_NONBLOCK);
     
     while(1)
     {
	     printf("\nWaiting\n");
	     FD_ZERO(&rfd);
	     FD_SET(fd, &rfd);
	     p_tv = NULL;
	     length = 0;
	     while(1)
	     {
		     s=select(fd+1, &rfd, NULL, NULL, p_tv);
		     if(s<0)
		     {
			     perror("select");
		     }
		     else if(s == 0)
		     {
			     printf("Time out\n");
			     p_tv = NULL;
			     break;
		     }
		     else
		     {
			     rdlen = read(fd, buffer, sizeof(buffer));
			     if(rdlen > 0)
			     {
				     for(i=0;i<rdlen;i++)
					     data[length+i] = buffer[i];
				     length += rdlen;
				     tv.tv_sec = 0;
				     tv.tv_usec = 3500;
				     p_tv = &tv;
			     }
			     else
			     {
				     printf("Error read: %d: %s\n",rdlen,strerror(errno));
			     }
		     }
	     }
	     printf("recieved %d bytes\n",length);
	     for(i=0;i<length;i++)
		     printf("%c",data[i]);
	     printf("\n");
     }
     close(fd);
}
