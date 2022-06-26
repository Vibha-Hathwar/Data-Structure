#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct empl
{
  char name[25];
  int id;
  char dept[25];
  int age;
  int sal;
}e;

void read(FILE *fp)
{
  printf("\nenter details of the employee\n");
  printf("Name : ");scanf("%s",e.name);
  printf("Id : ");scanf("%d",&e.id);
  printf("dept : ");scanf("%s",e.dept);
  printf("age : ");scanf("%d",&e.age);
  printf("salary : ");scanf("%d",&e.sal);
  fprintf(fp,"%s\t%d\t%s\t%d\t%d",e.name,e.id,e.dept,e.age,e.sal);
  printf("\nreacords saved successfully\n");
}

void display(FILE *fp)
{
  printf("\nNAME\t\tID\tDEPT\tAGE\tSALARY\n");
  while(fscanf(fp,"%s%d%s%d%d",e.name,&e.id,e.dept,&e.age,&e.sal)!=EOF)
       printf("%s\t\t%d\t%s\t%d\t%d\n",e.name,e.id,e.dept,e.age,e.sal);
}

void search(FILE *fp)
{
  char dept[20];
  int flag=0;
  printf("\nenter the dept to search\n");
  scanf("%s",dept);
  while(fscanf(fp,"%s%d%s%d%d",e.name,&e.id,e.dept,&e.age,&e.sal)!=EOF)
  {
      if(strcmp(e.dept,dept)==0)
      {
        if(flag==0)
        {
          printf("\nSuccessfull search\n");
          printf("\nNAME\tID\tDEPT\tAGE\tSALARY\n");
          flag=1;
        }
      printf("%s\t%d\t%s\t%d\t%d\n",e.name,e.id,e.dept,e.age,e.sal);
      }
  }
  if(flag==0)
      printf("\nFailure, no employee belonging to dept %s\n",dept);
}      

int main()
{
 FILE *fp;
 int ch;
 while(1)
 {
   printf("\n1 add record\n2 display record\n3 search record\n4 exit\n");
   printf("\nEnter choice ");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1:fp=fopen("emp","a");
            if(fp==NULL)                                               //NULL is different
                printf("\nerror in opening file\n");                   //zero is different
            else
            {
               read(fp);
               fclose(fp); 
            }
            break;
     case 2:fp=fopen("emp","r");
            if(fp==NULL)
                printf("\nfile does not exist\n");
            else
            {
               display(fp);
               fclose(fp); 
            }
            break;
     case 3:fp=fopen("emp","r");
            if(fp==NULL)
                printf("\nfile does not exist\n");
            else
            {
               search(fp);
               fclose(fp); 
            }
            break;
     case 4:exit(0);
     default:printf("\ninvalid choice\n");               
   }
 }
return 0;
}
