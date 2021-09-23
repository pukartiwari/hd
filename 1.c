#include<stdio.h>
struct employee
{

char name[40];
int age[40];
char add[20];
int phone[20];
}s[200];
void main()
{
struct employee temp;
int i,j,n;
for(i=0;i<n;i++)
{
printf("\n Enter the name of the %d person::",i+1);
		scanf("%s",s[i].name);
		printf("\n Enter the age of the %d person::",i+1);
		scanf("%d",&s[i].age);

		printf("\n Enter the address of the %d person::",i+1);
		scanf("%s",s[i].add);

}

for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
{
if(s[i].name<s[j].name)
{

    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    }
}
printf("\n name,add, age,phone no in ascending order by name ");
//for(i=0;i<n;i++)
//printf("%s%s%d%d",s[i].name,s[i].add,&s[i].age,s[i].phone);
printf("name=%s",s[0].name);
printf("add=%s",s[0].add);
printf("age=%d",&s[0].age);
printf("phone=%d",&s[0].phone);
getch();
}
