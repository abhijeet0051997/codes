#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
time_t rawtime;
struct tm *info;
char buf[100];
time(&rawtime);
info=localtime(&rawtime);
printf("current local rtime and date : %s",asctime(info));
return 0;
}
