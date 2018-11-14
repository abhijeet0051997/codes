#include<stdio.h>
#include<fcntl.h>
#include<gdbm.h>
#include<string.h>
#include<stdlib.h>
typedef struct employee{
	int emp_id;
	char emp_name[100];
	float salary;
	char desgn[100];
}emp;
int main()
{
	int res;
	emp empl1={1,"USER1",15000,"MANAGER"};
	emp empl2={2,"USER2",15200,"CLERK"};
	GDBM_FILE file=NULL;
	file=gdbm_open("database",0,GDBM_READER|GDBM_WRCREAT,0777,0);
	datum key1,val1,key2,val2;
	key1.dptr=(char *)&empl1.emp_id;
	key1.dsize=sizeof(empl1.emp_id);
	val1.dsize=sizeof(empl1);
	val1.dptr=(char *)&empl1;
	key2.dptr=(char *)&empl2.emp_id;
	key2.dsize=sizeof(empl2.emp_id);
	val2.dsize=sizeof(empl2);
	val2.dptr=(char *)&empl2;
	if(!file)
	{
		fprintf(stderr,"Dbm connection failed");
		return EXIT_FAILURE;
	}
	else
	{
		res=gdbm_store(file,key1,val1,GDBM_INSERT);
		if(res==0)
		printf("row successfully inserted  for employee id %d\n",empl1.emp_id);
		else
		printf("Row insertion failed");
		res=gdbm_store(file,key2,val2,GDBM_INSERT);
		if(res==0)
		printf("row successfully inserted  for employe id %d\n",empl2.emp_id);
		else
		printf("Row insertion failed");
	}
}
