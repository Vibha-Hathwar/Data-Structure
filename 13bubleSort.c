/*read n elements into an array and bubble sort*/

#include<stdio.h>
int main()
{
  int a[100];
  int n,i,j,temp;
  printf("enter size of array:\n");
  scanf("%d",&n);
  printf("enter array elements:\n");
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
  printf("entered array elements are:\n");
  for(i=0;i<n;i++)
     printf("%d\t",a[i]);
  for(i=0;i<n;i++)
    {
     for(j=0;j<n-1-i;j++)
      {
        if(a[j]>a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
      }  
    }  
  printf("\narray elements after sorting\n");
  for(i=0;i<n;i++)
     printf("%d\t",a[i]);
  printf("\n");   
}     
