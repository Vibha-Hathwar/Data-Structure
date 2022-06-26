/*read n integer elements into an array and perform binary search*/

#include<stdio.h>
int main()
{
  int a[100];
  int n,key,i,low,mid,high;
  printf("enter no of elements in array: ");
  scanf("%d",&n);
  printf("\nenter array elements:\n");
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
  printf("entered array elements are:");
  for(i=0;i<n;i++)
     printf("%d\t",a[i]);
  printf("\nenter key element to be searched:");
  scanf("%d",&key);
  low=0;
  high=n-1;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(key==a[mid])
      {
       printf("SUCESS key %d is found at position %d\n",key,mid+1);
       break;
      }
    else if(key<a[mid])
       high=mid-1;
    else
       low=mid+1;       
  }
  if(low>high)
        printf("search is unsucessful\n");
}
