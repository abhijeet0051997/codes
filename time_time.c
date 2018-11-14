#include<stdio.h>
#include<time.h>
int main()
{
time_t seconds;
seconds=time((time_t*)0);
//printf("hours since january 1,1970 = %ld",seconds/3600);
printf("Time is : %ld \n",seconds/3600);
return 0;
}
