
// Write a program to input 20 students information
//(student_name, student_roll, student_marks) and store them to a data file "student.dat", again
//finally, read the student–roll number from the user and display the associated student information of
//the entered roll number reading from the file "student.dat"//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	int roll;
	int marks;
}s[20];
int main()
{
	int i=0,rol;
	FILE *p;
	p=fopen("student.dat","w+");
	if(p==NULL)
	{
		printf("file does not exist.");
		exit(0);
	}
	for(i=0;i<3;i++)
	{
		printf("enter the name of student %d:\n",i+1);
		gets(s[i].name);
		fflush(stdin);
		printf("enter the roll no. of student %d:\n",i+1);
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("enter the marks of student %d:\n",i+1);
		scanf("%d",&s[i].marks);
		fflush(stdin);
	}
	fwrite(&s,sizeof(s),1,p);
	printf("enter the roll no. that you want detail of :\n");
	scanf("%d",&rol);
	p=open("student.dat","r+");
	fread(&s,sizeof(s),i,p);
	for(i=0;i<3;i++)
	{
			if(s[i].roll==rol);
			{
				printf("\nname =%s",s[i].name);
				printf("\nroll=%d",s[i].roll);
				printf("\nmarks=%d",s[i].marks);
			}

	}
	fclose(p);
	return 0;
}
