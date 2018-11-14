#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
int file_desc=open("dup.txt",O_WRONLY|O_APPEND);
dup2(file_desc,1);
printf("all the contents of the print statements will be copied 11111");
return 0;
}
