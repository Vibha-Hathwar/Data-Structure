/*define a structure array with fowllowing members- tnt array[10],int n. Using this structure, develop a c program read n elements into an array and sort them in ascending order using bubble sort technique */

#include<stdio.h>
int main()
{
  struct array
  {
    int a[10];
    int n;
  };
  struct array s;
  int n,i,j,temp;
  printf("enter no of elements in array:\n");
  scanf("%d",&s.n);
  printf("enter array elements:\n");
  for(i=0;i<s.n;i++)
     scanf("%d",&s.a[i]);
  printf("entered array elements are:  ");
  for(i=0;i<s.n;i++)
     printf("%d\t",s.a[i]);   
  for(i=0;i<s.n;i++)
  {
     for(j=0;j<s.n-1-i;j++)
      {
        if(s.a[j]>s.a[j+1])
        {
          temp=s.a[j];
          s.a[j]=s.a[j+1];
          s.a[j+1]=temp;
        }
      }  
  }
  printf("\narray elements after sorting\n");
  for(i=0;i<s.n;i++)
     printf("%d\t",s.a[i]);
  printf("\n");   
}  
