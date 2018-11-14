#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
	int opt,x,y;
	char *buf;
	while((opt=getopt(argc,argv,":ad:g:"))!=-1)
	{
		switch(opt)
		{
			case 'a':
				printf("enter two integers \n");
				scanf("%d",&x);
				scanf("%d",&y);
				int z=x+y;
				printf("\n addition of two number gives %d",z);
				break;
			case 'd':
				mkdir(optarg);
				break;
			case 'g':
				buf=getenv("PATH");
				printf("value is: %s \n",buf);
				putenv("PATH=/arpit");
				buf=getenv("PATH");
				printf("value is: %s \n",buf);
				break;
			case ':':
				printf("option needed a value");
				break;
			case '?':
				printf("unknown optionv: %c \n",optopt);
				break;
		}
	}
	for(;optind < argc ; optind++)
		printf("argument : %s \n",argv[optind]);
	return 0;
}
