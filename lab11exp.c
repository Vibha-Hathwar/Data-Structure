/*
Develop a C program to implement Josephus problem using
Circular Singly Linked List. Write necessary functions to perform the following
operations:
a) Add a soldier to the list.
b) Delete a soldier from the list.
*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
  char name[20];
  struct node *next;
}NODE;

NODE *ins_last(NODE *last,char name[])
{
  NODE *newnode;
  newnode=(NODE*)malloc(sizeof(NODE));
  strcpy(newnode->name,name);
  if(last==NULL)
    last=newnode;
  else
    newnode->next=last->next;
    last->next=newnode;
  return(newnode);
}

NODE *del_node(NODE *last)
{
  NODE *temp;
  temp=last->next;
  printf("%s ",temp->name);last->next=temp->next;
  free(temp);
  return(last);
}
int main()
{
  NODE *last=NULL;
  char name[20];
  int i,n;
  printf("\nEnter the value of n: ");
  scanf("%d",&n);
  printf("\nEnter the names of the soldiers, type \'end\' to terminate\n");
  scanf("%s",name);
  while(strcmp(name,"end")!=0)
  {
      last=ins_last(last,name);
      scanf("%s",name);
  }
  if(last==NULL)
     printf("\nEmpty list");
  else
  {
     printf("\nThe order in which soldiers are eliminated \n");
     while(last->next!=last)
    {
        for(i=1;i<n;i++)
        last=last->next;
        last=del_node(last);
    }
    printf("\n\nThe soldier who escapes: %s\n",last->name);
  }
}
