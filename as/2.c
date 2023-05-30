/*
Define a structure customer with following members: name, acc_no, balance. Using this
structure, read the details of a customer and give 10% interest to the customer if his
balance is more than 10,000/-. Display the customer information after updation.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  struct cust
  {
    char name[20];
    int a,b;
  };
  int i,n;
  printf("enter n \n");
  scanf("%d",&n);
  struct cust c[n];
  for(i=0;i<n;i++)
  {
     printf("\nenter details of customer %d\n",i+1);
     printf("name ");
     scanf("%s",c[i].name);
     printf("account no ");
     scanf("%d",&c[i].a);
     printf("balance ");
     scanf("%d",&c[i].b);
     if(c[i].b>10000)
         c[i].b=1.1*c[i].b;
   }
   printf("\ncoustomer details\n");
   printf("\nName\taccount no\tbalance\n"); 
   for(i=0;i<n;i++)
       printf("%s\t%d\t\t%d\n",c[i].name,c[i].a,c[i].b);
   
 }        
