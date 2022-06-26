#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct NODE
{
  char player[20];
  char team[20];
  float avg;
  struct NODE *next;
}node;

node *add(node *first)
{
  node *new,*temp;
  new=(node*)malloc(sizeof(node));
  new->next=NULL;
  printf("\nenter player details\n");
  printf("Name ");
  scanf("%s",new->player);
  printf("Team ");
  scanf("%s",new->team);
  printf("batting average ");
  scanf("%f",&new->avg);
  if(first==NULL)
     first=new;
  else
  {
    temp=first;
    while(temp->next!=NULL)
         temp=temp->next;
    temp->next=new;     
  }   
  printf("\nplayer %s is added at end of list\n",new->player);
  return first;
}

void display(node *first)
{
  if(first==NULL)
  {
    printf("\nempty list\n");
    return ;
  }
  printf("\n Player details");
  printf("\nName\tTeam\tBatting average\n");
  while(first!=NULL)
  {
    printf("%s\t%s\t%f\n",first->player,first->team,first->avg);
    first=first->next;
  }
}
node *search(node *first)
{
  node *temp;
  char player[20];
  if(first==NULL)
      printf("\nEMPTY LIST\n");
  else
  {    
      printf("\nEnter player name to search ");
      scanf("%s",player);
      temp=first;
      while(temp!=NULL&&strcmp(temp->player,player)!=0)
            temp=temp->next;
      if(temp==NULL)
            printf("\nplayer %s does not exist in the list\n",player);
      else
        {
            printf("\nplayer %s exist in the list\n",player);
            printf("current batting average = %f\n",temp->avg);
            printf("enter new value for batting average ");
            scanf("%f",&temp->avg);
            printf("\nBatting avg of %s is updated successfuly\n",player);            
        }      
  }
  return first;
}

int main()
{
  node *first=NULL;
  int choice;
  while(1)
  {
    printf("\n1 Add player\n2 search player\n3 display player\n4 exit\n");
    printf("\nenter your choice ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:first=add(first);
               break;
        case 2:first=search(first);
               break;
        case 3:display(first);
               break;
        case 4:exit(0);
        default:printf("\ninvalid input\n");       
    }
  }
}
