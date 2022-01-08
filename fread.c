#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct employee
{
	int id;
	char name[25];
	int salary;
}s[5];
int main()
{
	int i=0;
	FILE *p;
	p=fopen("ABC.txt","w+");
	if(p==NULL)
	{
		printf("File doesn't exists");
		exit(0);
	}
	fread(&s,sizeof(s),1,p);
	for(i=0;i<5;i++)
	{
		printf("\nThe Id is :%d",s[i].id);
		printf("\nThe Name is :%s",s[i].name);
		printf("\nThe Salary is :%d",s[i].salary);
	}
	return 0;
}
