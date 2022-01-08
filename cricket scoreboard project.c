#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void new_score_sheet();
void view_score_sheet();
void search_score_sheet();
struct cricket
{
char fname[50];
char lname[50];
int id;

}c;
FILE *fp1,*fp2;
void main()
{

    int choice,n;
    do
    {


               printf("\n1->new Score Sheet");
               printf("\n 2-> view Score Sheet");
               printf("\n3->Quit");
               printf("\n4->enter your choice");
               scanf("%d",&choice);

          switch(choice)
          {
              case 1:   new_score_sheet();
                        break;
              case 2:   view_score_sheet();
                        break;
               case 3:  search_score_sheet();
                        break;
               default:
                   printf("\nthanks for using this program");

          }
    } while(choice!=3);

}
void new_score_sheet()

{
    char choice='y';
    fp1=fopen("cricket.txt","a");
    while(choice!='n')
    {
        printf("\n enter the crickter id:");
        scanf("%d",&c.id);
        printf("enter the first name of the cricketer");
        scanf("%s",c.fname);
        printf("enter the last name of the crickter");
        printf("%s",c.lname);
    }
}

