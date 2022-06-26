#include<stdio.h>
int main ()
{
 struct college
 {
   char name[80];
   int branch;
   int yr;
 };
 int n,i,j,temp;
 printf("enter no of colleges\n");
 scanf("%d",&n);
 struct college h[n];
 for (i=0;i<n;i++)
  {
    printf("enter college name, no of branches,year of eshtablishment of college %d\n",i+1);
    scanf("%s%d%d",h[i].name,&h[i].branch,&h[i].yr);
  }
    
  for(i=0;i<n;i++)
  {
     for(j=0;j<n-1-i;j++)
      {
        if(h[j].yr>h[j+1].yr)
        {
          temp=h[j].yr;
          h[j].yr=h[j+1].yr;
          h[j+1].yr=temp;
        }
      }  
  }
  for(i=0;i<n;i++)
  {
      printf("\ncollege name %s\nno of branches %d\nyear of eshtablishment %d\n ",h[i].name,h[i].branch,h[i].yr);
  }
}
