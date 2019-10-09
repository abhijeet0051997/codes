#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
int fd=0;
struct stat sta;
fd=open("practice.txt",O_CREAT|O_RDWR|O_APPEND);
fstat(fd,&sta);
if(S_ISREG(sta.st_mode))
printf("is regular file");
else if(S_ISDIR(sta.st_mode))
printf("it is a regular file");
else {
  printf("no file found")
close(fd);
}
