/*
A blood bank  maintains donar information using linked list with each node having following information : name,doner id, units of blood donated.A C program to perform  following operations on this list :
a)insert a new doner at the end of the list
b)Display the doners of specific  blood group 
c)Find total available units of blood
d) rerequest 
*/



#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
typedef struct node
{
  char name[20];
  char id[20];
  char group[20];
  int unit;
  struct node *next;
}NODE;
int a[10];
NODE* insert(NODE *first)
{
  NODE *new,*temp;
  new=(NODE*)malloc(sizeof(NODE));
  printf("\nEnter donar details\n");
  printf("Name: ");
  scanf("%s",new->name);
  printf("Doner id: ");
  scanf("%s",new->id);
  printf("blood group: ");
  scanf("%s",new->group);
  printf("No of units donated: ");
  scanf("%d",&new->unit);
  if(first==NULL)
      first=new;
  else
  {
     temp=first;
     while(temp->next!=NULL)
        temp=temp->next;
     temp->next=new;
  }
  printf("\nDoner is added to the list\n");
  return(first);
}

int* sum(NODE *first,int a[10])
{ 
  NODE *temp=first;
  while(temp!=0)
  { 
     if(strcmp(temp->group,"A+")==0)
        a[0]=a[0]+temp->unit;
     else if(strcmp(temp->group,"A-")==0)
        a[1]=a[1]+temp->unit;  
     else if(strcmp(temp->group,"B+")==0)
        a[2]=a[2]+temp->unit;
     else if(strcmp(temp->group,"B-")==0)
        a[3]=a[3]+temp->unit;
     else if(strcmp(temp->group,"AB+")==0)
        a[4]=a[4]+temp->unit;
     else if(strcmp(temp->group,"AB-")==0)
        a[5]=a[5]+temp->unit;
     else if(strcmp(temp->group,"O+")==0)
        a[6]=a[6]+temp->unit;
     else
        a[7]=a[7]+temp->unit;
     temp=temp->next;    
   }
     if(a[0]>0)
          printf("\nBlood group A+ = %d unit\n",a[0]);
     if(a[1]>0)
          printf("Blood group A- = %d unit\n",a[1]); 
     if(a[2]>0)
          printf("Blood group B+ = %d unit\n",a[2]);
     if(a[3]>0)
          printf("Blood group B- = %d unit\n",a[3]); 
     if(a[4]>0)
          printf("Blood group AB+ = %d unit\n",a[4]);
     if(a[5]>0)
          printf("Blood group AB- = %d unit\n",a[5]); 
     if(a[6]>0)
          printf("Blood group O+ = %d unit\n",a[6]);
     if(a[7]>0)
          printf("Blood group O- = %d unit\n",a[7]);
return a;
}  

void display(NODE *first)
{
   if(first==NULL)
   {
      printf("\nEmpty list\n");
      return;
   }
   printf("\nName\tID\tBlood group\tunits donated\n"); 
   while(first!=NULL)
   {
     printf("%s\t%s\t%s\t\t%d\n",first->name,first->id,first->group,first->unit);
     first=first->next;
   }
}  



void display_p(NODE *first)
{
  NODE *temp;
  char group[20];
  if(first==NULL)
       printf("empty list\n");
  else
  {
    printf("enter blood group ");
    scanf("%s",group);
    printf("\nName\tID\tunits donated\n");
    temp=first;
    while(temp!=NULL)
    {
      if(strcmp(temp->group,group)==0)
           printf("%s\t%s\t%d\n",temp->name,temp->id,temp->unit);
      temp=temp->next;
    }
  }
}



int* req(int a[10])
{
  char group[20];
  int unit;
  printf("\nEnter group type and no of units ");
  scanf("%s%d",group,&unit);
   if(strcmp(group,"A+")==0)
    {  if(a[0]>0&&a[0]>unit)
       {
          a[0]=a[0]-unit;
          printf("\nremaining  A+ %d units\n",a[0]);
       }
       else if(a[0]<unit)
          printf("\navailable only %d units\n",a[0]);
       else
         printf("\nnot available\n");
    }
    else if(strcmp(group,"A-")==0)
    {  if(a[1]>0&&a[1]>unit)
       {
          a[1]=a[1]-unit;
          printf("\nremaining  A- %d units\n",a[1]);
       }
       else if(a[1]<unit)
          printf("\navailable only %d units\n",a[1]);
       else
         printf("\nnot available\n");
    }
    else if(strcmp(group,"B+")==0)
    {  if(a[2]>0&&a[2]>unit)
       {
          a[2]=a[2]-unit;
          printf("\nremaining  B+ %d units\n",a[2]);
       }
       else if(a[2]<unit)
          printf("\navailable only %d units\n",a[2]);
       else
         printf("\nnot available\n");
    }
    else if(strcmp(group,"B-")==0)
    {  if(a[3]>0&&a[3]>unit)
       {
          a[3]=a[3]-unit;
          printf("\nremaining  B- %d units\n",a[3]);
       }
       else if(a[3]<unit)
          printf("\navailable only %d units\n",a[3]);
       else
         printf("\nnot available\n");
    }
    else if(strcmp(group,"AB+")==0)
    {  if(a[4]>0&&a[4]>unit)
       {
          a[4]=a[4]-unit;
          printf("\nremaining  AB+ %d units\n",a[4]);
       }
       else if(a[4]<unit)
          printf("\navailable only %d units\n",a[4]);
       else
         printf("\nnot available\n");
    }
    else if(strcmp(group,"AB-")==0)
    {  if(a[5]>0&&a[5]>unit)
       {
          a[5]=a[5]-unit;
          printf("\nremaining  AB- %d units\n",a[5]);
       }
       else if(a[5]<unit)
          printf("\navailable only %d units\n",a[5]);
       else
         printf("\nnot available\n");
    }
    else if(strcmp(group,"O+")==0)
    {  if(a[6]>0&&a[6]>unit)
        {
          a[6]=a[6]-unit;
          printf("\nremaining O+ %d units\n",a[6]);
        }
       else if(a[6]<unit)
          printf("\navailable only %d units\n",a[6]);
       else
         printf("\nnot available\n");
    }
    else if(strcmp(group,"O-")==0)
    {  if(a[7]>0&&a[7]>unit)
        {
          a[7]=a[7]-unit;
          printf("\nremaining  O- %d units\n",a[7]);
        }
        else if(a[7]<unit)
          printf("\navailable only %d units\n",a[7]);
       else
         printf("\nnot available\n");
    }
    return a;
}



int main()
{  
  NODE *first=NULL; 
  int a[10]={0};
  int choice;
  while(1)
  {
     printf("\n1 Add doner\n2 doners details\n3 particular group doners\n4 blood available\n5 request\n6 exit\n");
     printf("\nEnter your choice ");
     scanf("%d",&choice);
     switch(choice)
     {  
         case 1:first=insert(first);
                break;
         case 2:display(first);
                break;
         case 3:display_p(first);
                break;
         case 4:sum(first,a);
                break;            
         case 5:req(a);
                break;
         case 6:exit(0);
         default:printf("\nInvalid choice\n");       
     }
   }
}

