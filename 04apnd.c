/*read m elements into an array A and n elements into an array B and append elements of array B to array A*/

#include<stdio.h>
void main ()
{
 int m,n,i;
 int a[m+n],b[n];
 printf("enter no of elements in A and B\n");
 scanf("%d%d",&m,&n);
 printf("enter elements of A\n");
 for (i=0;i<m;i++)
    scanf("%d",&a[i]);
 printf("array A: ");
 for (i=0;i<m;i++)
    printf("%d\t",a[i]); 
 printf("\nenter elements of B\n");          
 for (i=m;i<m+n;i++)
    scanf("%d",&a[i]);
 printf("array B: ");
 for (i=m;i<m+n;i++)
    printf("%d\t",a[i]);    
 printf("\nappending elements of B to A:\n");    
 for (i=0;i<m+n;i++)
    printf("%d\t",a[i]);
 printf("\n");   
}
