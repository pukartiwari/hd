#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct emply
{
int id;
int salary;
char name[30];

}s[10];
int main()
{

	int i;
	struct emply temp;

 	char n[20];
    for(i=0;i<3;i++)
    {

        printf("enter the id\t");
        scanf("%d",&s[i].id);
        fflush(stdin);
         printf("enter the salary\t");
        scanf("%d",&s[i].salary);
        fflush(stdin);
         printf("enter the name\t");
        scanf("%s",s[i].name);
        fflush(stdin);
    }
printf("enter the name you want to search :");
    scanf("%s",n);
     for(i=0;i<3;i++)
     {
     if(strcmp(strlwr(n),s[i].name)==0)
      {
        printf("employee details:\n");
        printf("name=%s\n",s[i].name);
        printf("id=%d\n",s[i].id);
        printf("salary=%d\n",s[i].salary);
      }
    else{
            if(i==3)
                printf("sorry invalid input");
    }


    }}

