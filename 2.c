/*WAP using structure to input record of 1000 employees and display records of employees
having the highest and the lowest salary.Also display the record of all employees working in the
"Computer Department".The members should include ID,name,Salary and Department.*/


#include<stdio.h>
#include<conio.h>
#include<string.h>
struct record
{
	char name[20];
	int id;
	int salary;
	char Department[10];
}emp[3],temp;
int main()
{
	int i=0,j=0;
	char wrd[]="computer";
	printf("\n Enter the details of the employees::\n");
	for(i=0;i<3;i++)
	{
		printf("\n Enter the name of the %d employee::",i+1);
		scanf("%s",emp[i].name);
		printf("\n Enter the id of the %d employees::",i+1);
		scanf("%d",&emp[i].id);
		printf("\n Enter the salary of the %d employee::",i+1);
		scanf("%d",&emp[i].salary);
		printf("\n Enter the department of the %d employee::",i+1);
		scanf("%s",emp[i].Department);
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(emp[i].salary<emp[j].salary)
			{
				temp=emp[i];
				emp[i]=emp[j];
				emp[j]=temp;
			}
		}
	}
	printf("\n The details of highest salary person is:");
	printf("\n NAME::%s",emp[0].name);
	printf("\n ID::%d",emp[0].id);
	printf("\n Salary::%d",emp[0].salary);
	printf("\n Department::%s",emp[0].Department);
	printf("\n **********************************");
	printf("\n The details of lowest salary person is:");
	printf("\n NAME::%s",emp[2].name);
	printf("\n ID::%d",emp[2].id);
	printf("\n Salary::%d",emp[2].salary);
	printf("\n Department::%s",emp[2].Department);
	printf("\n **********************************");
	printf("\n The details of employee working in Computer Department are::");
	for(i=0;i<3;i++)
	{
		if(strcmp(strlwr(emp[i].Department),wrd)==0)
		{
			printf("\n Employee name = %s\t",emp[i].name);
			printf("\n Employee id= %d\t",emp[i].id);
			printf("\n Employee salary= %d\t",emp[i].salary);
			}

	}}

