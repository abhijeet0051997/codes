#include<stdio.h>
#include<stdlib.h>
//copy content from read.txt file to write.txt file
void main()
{
FILE *fs,*ft;
char ch;
fs=fopen("read.txt","r");
ft=fopen("write.txt","w");
while(1)
{
ch=fgetc(fs);
if(ch==EOF)
break;
else
fputc(ch,ft);
}
fclose(fs);
fclose(ft);

}
