/*define a structure to represent a fraction. Using this structure, read 2 fractions and compute their sum */

#include<stdio.h>
int main()
{
  struct frac
  {
    int num;
    int den;
  };
  struct frac a,b;
  printf("enter numerator and denominator of 1st fraction\n");
  scanf("%d%d",&a.num,&a.den);
  printf("enter numerator and denominator of 2nd fraction\n");
  scanf("%d%d",&b.num,&b.den);
  int p,q,r,s;
  p=(a.num*b.den);
  q=(b.num*a.den);
  r=(a.den*b.den);
  printf("sum = %d/%d\n",p+q,r);
}
