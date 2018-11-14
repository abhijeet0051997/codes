#include<stdio.h>
#include<mysql.h>
#include<stdlib.h>
int main()
{
MYSQL *conn;
int res;
conn=mysql_init(NULL);
if(!conn)
{
	fprintf(stderr,"Connection creation failed");
	return EXIT_FAILURE;
}
else
{
	conn=mysql_real_connect(conn,"localhost","shipra","shipra","DBI",0,NULL,0);
	if(!conn)
	{
		printf("Connection failed");
		return EXIT_SUCCESS;
	}
	else
	{
		printf("Connection Successfully created\n");
		res=mysql_query(conn,"CREATE TABLE employee(emp_id int auto_increment primary key,emp_name varchar(30),salary int,designation varchar(30));");
		if(!res)
		{
			printf("Table employee successfully created\n");
			res=mysql_query(conn,"INSERT INTO employee values(123,'SHIPRA',15000,'Manager');");
			if(!res)
			{
				printf("INSERTION SUCCESFULL rows affected %lu\n",(unsigned long)mysql_affected_rows(conn));
			}
			else
			{
				printf("Error in INSERTION\n");
				printf("Error no %d:%s\n",mysql_errno(conn),mysql_error(conn));
			}
			res=mysql_query(conn,"INSERT INTO employee values(NULL,'ABCC',25000,'HR');");
			if(!res)
			{
				printf("INSERTION SUCCESFULL rows affected %lu\n",(unsigned long)mysql_affected_rows(conn));
			}
			else
			{
				printf("Error in INSERTION\n");
				printf("Error no %d:%s\n",mysql_errno(conn),mysql_error(conn));
			}
		}
		else
		{
			printf("Error in creation of table\n");
			fprintf(stderr,"Error no %d:%s\n",mysql_errno(conn),mysql_error(conn));
		}
	
		mysql_close(conn);
	}
}
return EXIT_SUCCESS;
}
