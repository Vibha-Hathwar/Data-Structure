#include<stdio.h>
int main ()
{
 struct empl
 {
   char name[80];
   char bran[80];
   int sal;
 };
 int n,i,j;
 printf("enter no of employees\n");
 scanf("%d",&n);
 struct empl h[n],temp;
 for (i=0;i<n;i++)
  {
    printf("enter name, branch ,salary of  %d\n",i+1);
    scanf("%s%s%d",h[i].name,h[i].bran,&h[i].sal);
  } 
  for(i=0;i<n;i++)
  {
     for(j=0;j<n-1-i;j++)
      {
        if(h[j].sal<h[j+1].sal)
        {
          temp=h[j];
          h[j]=h[j+1];
          h[j+1]=temp;
        }
      }     
  }
  printf("\nHigest salary paid employee : %s\n",h[0].name);
}
