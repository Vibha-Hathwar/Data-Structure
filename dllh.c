//lab 10 
//modified - 1 insert last(for loop), 2 no display based on branch

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

NODE *ins_last(NODE *head)
{
  NODE *new,*temp;
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
  new->rptr=NULL;
  for(temp=head;temp->rptr!=NULL;temp=temp->rptr);
  temp->rptr=new;
  new->lptr=temp;
  printf("\nStudent is added SUCCESSFULLY to the list\n");
  head->year++; 
}


void display(NODE *head)
{
   NODE *first;
   if(head->rptr==NULL)
   {
      printf("\nEmpty list\n");
      return;
   }
   printf("\nName\tUSN\tyear of addmission\n"); 
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
     printf("\n1 Add student\n2 display all\n3 exit\n");
     printf("\nEnter your choice ");
     scanf("%d",&choice);
     switch(choice)
     {  
         case 1:ins_last(head);
                break;
         case 2:display(head);
                break;
         case 3:exit(0);
         default:printf("\nInvalid input\n");       
     }
   }
}
