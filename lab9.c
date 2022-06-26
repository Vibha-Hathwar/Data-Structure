#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
  int info;
  struct node *next;
}NODE;

NODE *insert(NODE *first,int data)
{
  NODE *new,*temp,*prev;
  new=(NODE*)malloc(sizeof(NODE));
  new->info=data;
  if(first==NULL||data<first->info)
  {
    new->next=first;
    first=new;
  }
  else
  {
    temp=first;
    while(temp!=NULL&&data>temp->info)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL||data!=temp->info)
    {
        prev->next=new;
        new->next=temp;
    }
  }
  return first;
}

NODE *ins_last(NODE *first,int data)
{
  NODE *new,*temp;
  new=(NODE*)malloc(sizeof(NODE));
  new->info=data;
  new->next=NULL;
  if(first==NULL)
     first=new;
  else
  {
    temp=first;
    while(temp->next!=NULL)
          temp=temp->next;
    temp->next=new;       
  }     
  return first;
}

void display(NODE *first)
{
   if(first==NULL)
   {
      printf("\nEmpty\n");
      return;
   }
   printf("\nContents\nbegin-> ");
   while(first!=NULL)
   {
      printf("%d-> ",first->info);
      first=first->next;
   }
   printf("End\n");
}

NODE *merge(NODE *l1,NODE*l2)
{
  NODE *l3=NULL;
  if(l1==NULL&&l2==NULL)
  {
     printf("\nList l1 and List l2 are EMPTY\n");
     return NULL;
  }
  while(l1!=NULL&&l2!=NULL)
  {
    if(l1->info<l2->info)
    {
        l3=ins_last(l3,l1->info);
        l1=l1->next;
    }
    else if(l2->info<l1->info)
    {
        l3=ins_last(l3,l2->info);
        l2=l2->next;
    }
    else
    {
        l3=ins_last(l3,l1->info);
        l2=l2->next;
    }
  }
  while(l1!=NULL)
  {
      l3=ins_last(l3,l1->info);
      l1=l1->next; 
  }
  while(l2!=NULL)
  {
      l3=ins_last(l3,l2->info);
      l2=l2->next; 
  }
  printf("\nLists are merged successfully\n");
  return l3;
}  
int main()
{  
  NODE *l1=NULL,*l2=NULL,*l3=NULL; 
  int data,choice;
  while(1)
  {
     printf("\n1 ins_l1st_1\n2 ins_l1st_2\n3 merge\n4 display\n5 exit\n");
     printf("\nEnter your choice ");
     scanf("%d",&choice);
     switch(choice)
     {  
         case 1:printf("Enter data ");
                scanf("%d",&data);
                l1=insert(l1,data);
                break;
         case 2:printf("Enter data ");
                scanf("%d",&data);
                l2=insert(l2,data);
                break;
         case 3:l3=merge(l1,l2);
                printf("\nlist: ");
                display(l3);
                break;
         case 4:printf("\nlist 1: ");
                display(l1);
                printf("\nlist 2: ");
                display(l2);
                break;
         case 5:exit(0);
         default:printf("\nInvalid input\n");       
     }
   }
}
