/*read n integer elements into an array and perform linear search*/

#include<stdio.h>
int main()
{
  int a[100];
  int n,key,i,flag;
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
  flag=0;
  for(i=0;i<n;i++) 
    { 
       if(key==a[i])
       {
          flag=1;
          break;
       }
    }
    if(flag==1)
        printf("SUCESS key %d is found at position %d\n",key,i+1);
    else
        printf("search is unsucessful\n");    
}
