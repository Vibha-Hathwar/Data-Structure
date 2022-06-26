#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
  char name[20];
  char usn[20];
  char branch[20];
  int year;
  struct node *lptr,*rptr;
}NODE;

NODE *ins_first(NODE *head)
{
  NODE *new;
  new=(NODE*)malloc(sizeof(NODE));
  printf("enter details of student\n");
  printf("Name ");
  scanf("%s",new->name);
  printf("USN ");
  scanf("%s",new->usn);
  printf("branch ");
  scanf("%s",new->branch);
  printf("year of admission ");
  scanf("%d",&new->year);
  new->lptr=head;
  new->rptr=head->rptr;
  if(head->rptr!=NULL)
     head->rptr->lptr=new;
  head->rptr=new;
  printf("\nStudent is added SUCCESSFULLY to the list\n");
  head->year++; 
}

void display1(NODE *head)
{
   NODE *first;
   char branch[20];
   int flag=0;
   if(head->rptr==NULL)
   {
      printf("\nEmpty list\n");
      return;
   }
   printf("\nEnter branch to search ");
   scanf("%s",branch);
   first=head->rptr;
   while(first!=NULL)
   {
      if(strcmp(first->branch,branch)==0)
      {
         if(flag==0)
         { 
           printf("\nSUCCESS, student is from branch %s is found\n",branch);
           printf("\nName\tUSN\tyear of addmission\n");
           flag=1;
         }
         printf("%s\t%s\t%d\n",first->name,first->usn,first->year);
      }
   first=first->rptr;
  }
  if(flag==0)
     printf("\nFAILURE, no student from branch %s\n",branch);  
}
  
void display2(NODE *head)
{
   NODE *first;
   if(head->rptr==NULL)
   {
      printf("\nEmpty list\n");
      return;
   }
   printf("\nName\tUSN\tbranch\tyear of addmission\n"); 
   first=head->rptr;
   while(first!=NULL)
   {
     printf("%s\t%s\t%s\t%d\n",first->name,first->usn,first->branch,first->year);
     first=first->rptr;
   }
   printf("\nTotal no of students =%d\n",head->year);
}  
  
int main()
{  
  NODE *head; 
  int choice;
  head=(NODE*)malloc(sizeof(NODE));
  head->lptr=head->rptr=NULL;
  head->year=0;
  while(1)
  {
     printf("\n1 Add student\n2 Display based on branch\n3 display all\n4 exit\n");
     printf("\nEnter your choice ");
     scanf("%d",&choice);
     switch(choice)
     {  
         case 1:ins_first(head);
                break;
         case 2:display1(head);
                break;
         case 3:display2(head);
                break;
         case 4:exit(0);
         default:printf("\nInvalid input\n");       
     }
   }
}
