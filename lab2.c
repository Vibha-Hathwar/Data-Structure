/*Develop a C program to implement Stack of names to perform the
push, pop and display operations.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 3
typedef struct 
{
  char item[max][25];
  int top;                                     //lab program 2 
}STACK;
                                               //output if block only
int ful(STACK s)
{
   if(s.top==max-1)
      return 1;
   return 0;
}

int mpty(STACK s)
{
   if(s.top==-1)
      return 1;
   return 0;   
}

void push(STACK *s,char name[])
{
   strcpy(s->item[++s->top],name);
   printf("\nName %s is pushed on to the stack\n",name);
}

char *pop(STACK *s)
{
   return (s->item[s->top--]);
}

void dis(STACK s)
{
   int i;
   printf("\nSTACK CONTENTS\nBOS ->");
   for(i=0;i<=s.top;i++)
       printf("%s ->",s.item[i]);
   printf("TOS\n");    
}

int main()
{
  STACK s;
  int choice;
  char name[20];
  s.top=-1;
  while(1)
  {
     printf("\n1 PUSH\n2 POP\n3 DISPLAY\n4 EXIT\n"); 
     printf("\nEnter your choice ");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1: if(ful(s))
                  printf("\nStack overflow!!\n");
                else
                {
                  printf("\nEnter name to be pushed ");
                  scanf("%s",name);
                  push(&s,name);
                }   
                break;
        case 2: if(mpty(s))
                   printf("\nStack Underflow!!\n");
                else
                  printf("\nName %s is popped from stack\n",pop(&s));
                break;
        case 3: if(mpty(s))
                   printf("\nStack is empty!!\n");
                else
                   dis(s);
                break;
        case 4: exit(0);
        default: printf("\nInvalid choice!!\n");                                   
     }
  }
  return 0;
}
