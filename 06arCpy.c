/*read n elements into an array and copy the contents of an array into another array using pointers*/

#include<stdio.h>
int main()
{
   int n,i,*p;
   printf("enter array size\n");
   scanf("%d",&n);
   int a[n],b[n];
   int *p1=a;
   int *p2=b;
   printf("enter array elements\n");
   for(i=0;i<n;i++)
       scanf("%d",p1+i);
   printf("array A: ");
   for(i=0;i<n;i++)
       printf("%d\t",p1[i]);    
   for(i=0;i<n;i++)
       p2[i]=p1[i];
   printf("\narray B: ");    
   for(i=0;i<n;i++)
       printf("%d\t",p2[i]);
printf("\n");
}
