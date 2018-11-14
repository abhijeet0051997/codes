#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
printf("this process is %d \n",getpid());
printf("the real user is %d \n",getuid());
printf("the effectiv user is %d \n",geteuid());
return 0;
}

