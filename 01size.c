/*declare variables of char, int, float,double type and print size of each variable*/

#include<stdio.h>
#include<stdlib.h>
int main ()
{
  char a='z';
  int b=2;
  float c=3.4;              //int %d         //double %e
  double d=6.9;
  printf("size of charecter 'z' is %d\nsize of integer 2 is %d\nsize of float 3.4 is %d\nsize of double 6.9 is %d\n",sizeof(char),sizeof(int),sizeof(float),sizeof(double));
}

/*enter a double 
  78.87
  4.677571e-310s
*/
