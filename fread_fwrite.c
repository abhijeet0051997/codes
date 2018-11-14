#include<stdlib>
#include<string.h>
int main()
{
FILE *fp;
char c[]="computing practicum";
char buff[100];
fp=fopen("dup2.c","w+");
fwrite(c,strlen(c)+1,1,fp);
fseek(fp,0,SEEK_SET);
fread(buff,strlen(c)+1,1,fp);
printf("%s \n",buff);
fclose(fp);
}
