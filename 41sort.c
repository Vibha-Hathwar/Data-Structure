#include<stdio.h>
int main()
{
  struct teach
  {
    char name[25];
    int th,lab,co,wl;
  };
  int n,i,j;
 printf("enter no of teachers\n");
 scanf("%d",&n);
 struct teach h[n],temp;
 for (i=0;i<n;i++)
  {
    printf("enter teacher name, no of theory classes,no of lab classes,no of coordination %d\n",i+1);
    scanf("%s%d%d%d",h[i].name,&h[i].th,&h[i].lab,&h[i].co);
  }
  for(i=0;i<n;i++)
     h[i].wl=8*h[i].th+3*h[i].lab+2*h[i].co;  
  for(i=0;i<n;i++)
  {
     for(j=0;j<n-1-i;j++)                                                 //ascending ide
      {                                                                     //descending keliradu
        if(h[j].wl<h[j+1].wl)
        {
          temp=h[j];
          h[j]=h[j+1];
          h[j+1]=temp;
        }
      }  
  }
  printf("name\ttheory\tlab\tcoord\tworkload\n");
  for(i=0;i<n;i++)
  {                                                                                   //workload eno print aagutte
      printf("%s\t%d\t%d\t%d\t%d\n",h[i].name,h[i].th,h[i].lab,h[i].co,h[i].wl);
  }
}
