#include<stdio.h>
#include<conio.h>
#include<string.h>

struct emp
{
 int Id;
 char N[20];
 int S;
 int A;
 int P;
}e[3];

void main()
{
 int R;
 int i;
 for(i=0;i<3;i++)
 {
 printf("Enter the Id\t");
 scanf("%d",&e[i].Id);
 printf("Enter the Name\t");
 scanf("%s",&e[i].N);
 printf("Enter the Salary\t");
 scanf("%d",&e[i].S);
 printf("Enter the Age\t");
 scanf("%d",&e[i].A);
 printf("Enter the Phone Number\t");
 scanf("%d",&e[i].P);
 }

 printf("\n\nSearch emp by Id Number =\t");
 scanf("%d",&R);

 for(i=0;i<3;i++)
 {
 if(e[i].Id==R)
 {
 printf("\n Emp Details:");
 printf("\n Name: %s",e[i].N);
 printf("\n Salary: %d",e[i].S);
 printf("\n Age: %d",e[i].A);
 printf("\n Phone Number: %d",e[i].P);
 }
 }

 getch();
}
