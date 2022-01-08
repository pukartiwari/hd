#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct employee
{
int id;
char name[20];
int salary;

}s[50];
void main()
{
int i=0;
FILE *fp;
fp=fopen("student.txt","w+");
if(fp==NULL)
{
    printf("the file doesnot allocated");
    exit(0);
}
for(i=0;i<=5;i++)
{
printf("\nenter the name of the employee");
gets(s[i].name);
fflush(stdin);
printf("\n enter the id of the employee");
scanf("%d",&s[i].id);
fflush(stdin);
printf("\n enter the salary of the employee");
scanf("%d",&s[i].salary);
}
if(s[i].salary>5000)
{
    printf("\n enter the name of the employee");
gets(s[i].name);
fflush(stdin);
printf("\n enter the id of the employee");
scanf("%d",&s[i].id);
fflush(stdin);
printf("\n enter the salary of the employee");
scanf("%d",&s[i].salary);
}
fwrite(&s,sizeof(s),1,fp);
fclose(fp);
getch();
}
