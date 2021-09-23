#include<stdio.h>
#include<conio.h>
struct details{
char name [20][40];
char add[20];
int age[20];
int salary[20];



}s[50];
void main()
{
    struct details temp;
    int i,j,n;
printf("enter how many persons details you want to add");
scanf("%d",&n);
for(i=0;i<=50;i++)
{

        printf("enter the name\n");
        scanf("%s",s[i].name);
        printf("enter the add\n");
        scanf("%s",s[i].add);
        printf("enter the age\n");
        scanf("%d",s[i].age);
        printf("enter the salary\n");
        scanf("%d",s[i].salary);
}
    for(i=0;i<50;i++)

        for(j=i+1;j<50;j++)
    {
        if(s[i].name>s[j].name)
        {

            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
    printf("\n name,add,age and salary in ascending order");
    for(i=0;i<=50;i++)
    {


        printf("\name=%s\t add=%s\t age=%d\t salary=%d",s[i].name,s[i].add,s[i].age,s[i].salary);
     }
        getch();
}
