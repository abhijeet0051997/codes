#include<stdio.h>
#include<stdlib.h>
int main(int c,char *v[])
{
char *buf;
buf=getenv("HOME");
printf("value is: %s \n",buf);
putenv("HOME=/arpit");
buf=getenv("HOME");
printf("value is: %s \n",buf);
return 0;
}
