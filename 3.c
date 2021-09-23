/*WAP using structure to read name,age,address and telephone no of N persons and sort them
in ascending order by name and display the person's all details whose age is greater than 25.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct details
{
	char name[20];
	int age;
	char address[30];
	int number;
}per[100],temp;
int main()
{
	int i=0,j=0,n=0;
	printf("\n How many record you want to enter::\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the name of the %d person::",i+1);
		scanf("%s",per[i].name);
		printf("\n Enter the age of the %d person::",i+1);
		scanf("%d",&per[i].age);
		printf("\n Enter the Telephone number of the %d person::",i+1);
		scanf("%d",&per[i].number);
		printf("\n Enter the address of the %d person::",i+1);
		scanf("%s",per[i].address);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(per[i].name,per[j].name)>0)
			{
				temp=per[i];
				per[i]=per[j];
				per[j]=temp;
			}
		}
	}
	printf("\n The information of the employees are ::\n");
	for(i=0;i<n;i++)
	{
		if(per[i].age>25)
		{
	   		printf("\nPerson name = %s\t",per[i].name);
			printf("\nPerson telephone number= %d\t",per[i].number);
			printf("\nPerson Age= %d\t",per[i].age);
			printf("\nAddress = %s\t",per[i].address);
			printf("\n");
		}
	}
	getch();
}
