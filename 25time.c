/*define a structure to represent time. Using this structure, read the value for time during compile time and compute the total time in seconds */

#include<stdio.h>
int main()
{
  struct time
  {
    int hr;
    int min;
    int sec;
  };
  struct time a;
  printf("enter time in hr min sec\n");
  scanf("%d%d%d",&a.hr,&a.min,&a.sec);
  printf("total time in seconds = %d\n", a.hr*360+a.min*60+a.sec);
}
