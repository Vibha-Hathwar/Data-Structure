/*9
Define a structure to represent Time. Develop C functions for the following:
a) Read the time using pass by value method.
b) Print the time in standard format using pass by value method.
c) Find the time in seconds by using pass by value method. (The function should return
the time in seconds to calling function)
Using these functions, develop a C program to read time and find the time in seconds.
*/
#include <stdio.h>
#include <stdlib.h>
struct time
  {
    int h,m,s;
  };
void read(struct time *t)
  {
    scanf("%d%d%d",&t->h,&t->m,&t->s);
  }
void print(struct time t)
  {
    printf("%d:%d:%d",t.h,t.m,t.s);
  }
struct time sec(struct time t)
  {
    t.s=t.s+t.h*(3600)+t.m*(60);
    return(t);
  }
int main()
{
    struct time t;
    printf("Enter time in hour minutes and seconds : ");
    read(&t);
    printf("\nTime in standard method : ");
    print(t);
    t=sec(t);
    printf("\nTime in seconds : %d",t.s);
    printf("\n");
}

