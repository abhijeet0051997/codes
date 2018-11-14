#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
int dup1;
int fd=open("dup1.txt",O_WRONLY|O_APPEND,0777);
printf("working?? \n");

dup1=dup2(fd,6);
printf("%d \n",dup1);
printf("all the contents of the print statements will be copied");
printf("%d \n",fd);
printf("hello \n");
return 0;
}
