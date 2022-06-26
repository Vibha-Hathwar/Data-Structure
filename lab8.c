#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  float c;
  float px;                            //logical error
  float py;
  int flag;
  struct node *next;
}NODE;

NODE *ins_l(NODE *first,float cf,float px,float py)
{
  NODE *new,*temp;
  new=(NODE*)malloc(sizeof(NODE));
  new->c=cf;
  new->px=px;
  new->py=py;
  new->flag=0;
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


NODE *read_p(NODE *first)
{
  float cf,px,py;
  printf("enter coefficient ");
  scanf("%f",&cf);
  while(cf!=999)
  {
    printf("enter power of x ");
    scanf("%f",&px);
    printf("enter power of y ");
    scanf("%f",&py);
    first=ins_l(first,cf,px,py);
    printf("enter coefficient ");
    scanf("%f",&cf);
  }
  return first;
}

NODE *add(NODE *p1,NODE *p2,NODE *p3)
{
  NODE *temp;
  float cf;
  temp=p2;
  while(p1!=NULL);
  {
      while(p2!=NULL)
      {
         if((p1->px==p2->px)&&(p1->py==p2->py))
            break;
          p2=p2->next;     
      }
      if(p2==NULL)
         p3=ins_l(p3,p1->c,p1->px,p1->py);
      else
      {
         cf=p1->c+p2->c;
         if(cf!=0)
         {
             p3=ins_l(p3,cf,p1->px,p1->py);
             p2->flag=1;
          }
      }   
      p2=temp;
      p1=p1->next;
  }
  p2=temp;
  while(p2!=NULL)
  {
    if(p2->flag==0)
       p3=ins_l(p3,p2->c,p2->px,p2->py);
       p2=p2->next;
  }
  return p3;
}

void display(NODE *first)
{
   if(first==NULL)
   {
     printf("\nEMPTY LIST\n");
     return;
   }
   while(first->next!=NULL)
   {
      printf("%.0f*^%0.fy^%0.f+",first->c,first->px,first->py);
      first=first->next;
   }
    printf("%.0f*^%0.fy^%0.f",first->c,first->px,first->py);
}

int main()
{
  NODE *p1=NULL,*p2=NULL,*p3=NULL;
  printf("\nEnter 1st polynomial\n");
  p1=read_p(p1);
  printf("\nEnter 2nd polynomial\n");
  p1=read_p(p2);                                    //read madkollatte
  p3=add(p1,p2,p3);                                 //munde hogalla
  printf("\n 1st polynomial\n");                   
  display(p1);
  printf("\n 2nd polynomial\n");
  display(p2);
  printf("\n resultant polynomial\n");
  display(p3);
}
