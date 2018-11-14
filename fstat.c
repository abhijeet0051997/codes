#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{
int fd=0,err=0;
struct stat st;
fd=open("in.txt",O_CREAT|O_RDWR|O_APPEND);
if(fd==-1)
{
printf("error in opening file");
return -1;
}
if(fstat(fd,&st))
{
printf("fstat(): error");
printf("\n fstaterror : [%s] \n",strerror(err));
close(fd);
return -1;
}
fstat(fd,&st);
if(S_ISREG(st.st_mode))
{
printf("\n fileis a regular file");
}
else if(S_ISDIR(st.st_mode))
{
printf("file is a directory");
}
close(fd);
return 0;
}
