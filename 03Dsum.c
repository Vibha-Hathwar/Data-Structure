/*read an integer and compute the sum of squares of each digit of the integer*/

#include<stdio.h>
int main()
{
  int n,sum=0,r;
  printf("enter an integer\n");
  scanf("%d",&n);
  while(n!=0)
  {
     r=n%10;
     sum=sum+(r*r);     
     n=n/10;
  }
  printf("sum of squares of digits of given integer is\n%d\n",sum);
}  
