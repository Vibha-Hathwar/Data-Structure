#include<stdio.h>
#include<stdlib.h>
#define max 3

int count;

typedef struct                 //lab program 6
{                              //output only if block
  int item[max];
  int f,r;
}QUEUE;

int full(QUEUE q)
{
  if(q.f==(q.r+1)%max)
      return 1;
  return 0;    
}

int empty(QUEUE q)
{
  if(q.f==-1)
     return 1;
  return 0;   
}

void insert(QUEUE *q,int data)
{
   q->r=(q->r+1)%max;
   q->item[q->r]=data;
   printf("\n%d is inserted into circular Q\n",data);
   count++;
   if(q->f==-1)
       q->f=0;
}

int delete(QUEUE *q)
{
   int data;
   data=q->item[q->f];
   count--;
   if(q->f==q->r)
       q->f=q->r=-1;
   else
       q->f=(q->f+1)%max;
   return(data);             
}

void display(QUEUE q)
{
   int i;
   printf("\nQUEUE contents\nFront ->");
   for(i=1;i<=count;i++)
   {
      printf("%d ->",q.item[q.f]);
      q.f=(q.f+1)%max;
   }
   printf("Rear\n");
}

int main()
{
  QUEUE q;
  int choice;
  int data;
  q.f=q.r=-1;
  while(1)
  {
     printf("\n1 insert\n2 Delete\n3 Display\n4 Exit\n");
     printf("\nEnter your choice "); 
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:if(full(q))
                  {
                   printf("\nCircular queue overflow!!\n");
                  }
                else
                { 
                    printf("\nEnter data to be inserted  ");
                    scanf("%d",&data);
                    insert(&q,data);     
                }
                break;
        case 2:if(empty(q))
                   {
                   printf("\n Q underflow");
                   }
                else
                {
                   printf("%d is deleted from Q",delete(&q));
                }
                break;   
        case 3:if(empty(q))
                 {
                   printf("\n Q s empty");
                }
                else
                 {
                   display(q);           
                 }
                break;
        case 4:exit(0);
        default:printf("invalid choice");              
     }
  }
  return 0;
}
