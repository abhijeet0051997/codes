#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
time_t timeval;
time(&timeval);
printf("the date is : %s",ctime(&timeval));
exit(0);
}
