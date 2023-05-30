/*10
Define a structure Magazine with name and price as members. Develop C functions for
the following:
a) Read the details on n magazines
b) Print the details of n magazines
c) List the magazines whose price is in the range 50 - 200.
Using these functions, develop a C program to read the details of n magazines and print
the details of only those magazines whose price is in the range 50-200.
*/
#include <stdio.h>
#include <stdlib.h>
struct magazine
  {  
    char name[20];
    int price;
  };
void read(struct magazine m[],int n)
{
   int i;
   printf("Enter the details of %d magazines\n",n);
   for(i=0;i<n;i++)
   {
     printf("\n%d ",i+1);
     printf("name : ");
     scanf("%s",m[i].name);
     printf("   price : ");
     scanf("%d",&m[i].price);
   }
}
void print(struct magazine m[],int n)
{
  int i;
  printf("\nDetails of %d magazines\n",n);
  printf("Name\tPrice\n");
  for(i=0;i<n;i++)
     printf("%s\t%d\n",m[i].name,m[i].price);
}
void list(struct magazine m[],int n)
{
    int i;
    printf("\nbooks of price range 50 -200 Rs\n");
    printf("Name\tPrice\n");
    for(i=0;i<n;i++)
    {
        if(m[i].price<=200&&m[i].price>=50)
            printf("%s\t%d\n",m[i].name,m[i].price);
    }
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    struct magazine m[n];
    read(m,n);
    print(m,n);
    list(m,n);
}

