/*define a structure array with fowllowing members- tnt array[10],int n. Using this structure, develop a c program read n elements into an array and conduct linear search for the key element */

#include<stdio.h>
int main()
{
  struct array
  {
    int a[10];
    int n;
  };
  struct array s;
  int i,key,flag;
  printf("enter no of elements in array:\n");
  scanf("%d",&s.n);
  printf("enter array elements:\n");
  for(i=0;i<s.n;i++)
     scanf("%d",&s.a[i]);
  printf("entered array elements are:  ");
  for(i=0;i<s.n;i++)
     printf("%d\t",s.a[i]);   
  printf("\nenter key element to be searched:");
  scanf("%d",&key);
  flag=0;
  for(i=0;i<s.n;i++) 
    { 
       if(key==s.a[i])
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
