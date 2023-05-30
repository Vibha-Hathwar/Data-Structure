/*7
Define a structure to represent a Point. Develop C functions for the following:
a) Read a point using pass by reference method.
b) Check whether the point lies on x-axis using pass by value method.
Using these functions, develop a C program to read a point and check whether it lies on
x-axis or not.
*/
#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x,y;
}p;
void read(struct point *p)
{
    scanf("%d%d",&p->x,&p->y);
}
void check(struct point p)
{
    if(p.y==0)
        printf("\npoint lies on the x-axis\n");
    else
        printf("\npoint does NOT lie on the x-axis\n");
}
int main()
{
    printf("Enter the point : ");
    read(&p);
    check(p);
}

