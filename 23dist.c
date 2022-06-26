/*define a structure to represent a point. Using this structure, read 2 points and compute their distance */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()                                                           
{                                                                   // if gcc 23dist.c  
  struct point                           //gcc 23dist.c -lm        //gcc in function 'main'  
  {                                                                //undedined reference to 'sqrt'
    float x;                                                      //ld returned 1 exist status
    float y;
  };
  struct point a,b;
  printf("enter x and y co-ordinates of 1st point\n");
  scanf("%f%f",&a.x,&a.y);
  printf("enter x and y co-ordinates of 2nd point\n");
  scanf("%f%f",&b.x,&b.y);
  float p,q,r;
  p=(b.x-a.x);
  q=(b.y-a.y);
  r=sqrt((p*p)+(q*q));
  printf("distance = %f\n",r);
return 0;
}
