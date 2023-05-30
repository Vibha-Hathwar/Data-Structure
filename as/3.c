/*QUES 3:
A set of integers is stored as a data member in a structure called “numbers”. The same
structure also contains a nested structure “processed_numbers”. The task to be
performed is that to segregate the integers into odd and even numbers and store it in
the arrays odd_nos and even_nos which are the data members of the structure
“processed numbers”. Develop a C program to implement the same.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j=0,n,counto=0,counte=0;
    printf("Enter the number of entries: ");
    scanf("%d",&n);
    struct number
    {
       int num[n];
       struct processed_number
       {
           int odd_nos[n];
           int even_nos[n];
       }p;
    }x;
    printf("\nEnter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&x.num[i]);
    for(i=0;i<n;i++)
      if(x.num[i]%2==0)
      {
        x.p.even_nos[j]=x.num[i];
        j++;
        counte++;
      }
    j=0;
    for(i=0;i<n;i++)
      if(x.num[i]%2!=0)
      {
        x.p.odd_nos[j]=x.num[i];
        j++;
        counto++;
      }
    printf("NUMBERS ENTERED\n");
    for(i=0;i<n;i++)
        printf("%d\t",x.num[i]);
    printf("\nEVEN NUMBERS :");
    for(i=0;i<counte;i++)
        printf("%d\t",x.p.even_nos[i]);
    printf("\nODD NUMBERS: ");
    for(i=0;i<counto;i++)
        printf("%d\t",x.p.odd_nos[i]);
    printf("\n");
}

