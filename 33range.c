#include<stdio.h>
int main ()
{
 struct book
 {
   char name[80];
   char aut[80];
   int price;
 };
 int n;
 printf("enter no of books\n");
 scanf("%d",&n);
 struct book h[n];
 int i;
 for (i=0;i<n;i++)
  {
    printf("enter book title, author name, price of book %d\n",i+1);
    scanf("%s%s%d",h[i].name,h[i].aut,&h[i].price);
  }
  for (i=0;i<n;i++)
  {
    if(500<h[i].price && h[i].price<1000)
    { 
       printf("\nbook title %s\nauthor name %s\nprice of book  %d\n",h[i].name,h[i].aut,h[i].price);
    }
  }  
}
