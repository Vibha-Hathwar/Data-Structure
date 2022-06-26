/*develop a C function to
  read an integer (no argumrnt ,with return type
  print an integer (with argumrnt,no return type
  compute sumof 2 integer (with argumrnt,with return type
*/
#include<stdio.h>

int read()
{
  int a;
  scanf("%d",&a);
  return a;
}


void print(int a)
{
  printf("\nthe integer is %d",a);
}

int sum (int a,int b)
{
   return a+b;
}

int main()
{
  int n;
  int a=read();                 //   ./a.out enu baralla
  int b= read();                //    ctrl z hoddu barbeku
  print(a);
  print(b);
  n=sum(a,b);
  print(n);
  return 0;
}
