#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
char *buf;
buf=(char *)malloc(10*sizeof(char));
buf=getlogin();
printf("\n %s \n",buf);
return 0;
}
