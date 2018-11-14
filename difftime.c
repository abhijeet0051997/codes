#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main()
{
time_t start_t,end_t;
double diff_t;
printf("start time \n");
time(&start_t);
printf("wnd time \n");
sleep(5);
//time(&end_t);
diff_t=difftime(end_t,start_t);
printf("execution time : %f \n",diff_t);
printf("end of program \n");
time(&end_t);
return 0;
}
