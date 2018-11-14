#include<sys/types.h>
#include<pwd.h>
#include<stdio.h>
int main()
{
struct passwd *p;
uid_t uid=0;
if((p=getpwuid(uid))==NULL)
perror("\n getpwuid() error");
else
{
printf("\n getpwuid returned the following name and directory for user ID %d :",(int)uid);
printf("\n pw_name : %s",p->pw_name);
printf("\n pw_dir : %d",p->pw_dir);
printf("\n pw_uid : %d",p->pw_uid);
printf("\n pw_gid : %d",p->pw_gid);
printf("\n pw_shell : %d",p->pw_shell);
}
}
