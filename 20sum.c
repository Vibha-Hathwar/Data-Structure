/*define a structure number with 1 member of integer type. Using this structure, read 2 numbers and compute their sum */

#include<stdio.h>
int main()
{
  struct num
  {
    int a;
  };
  struct num n1,n2;
  printf("enter 2 integers\n");
  scanf("%d%d",&n1.a,&n2.a);
  printf("sum = %d\n",n1.a+n2.a);
}  
