/*Ques13:
Define a structure to represent a Point. Develop C functions for the following:
a) Read a point using pass by reference method.
b) Find the distance between two points. (The function should receive two points by
value and return the result to the calling function)
Using these functions, develop a C program to read two points and find the distance
between the two points.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct point
{
    int x,y;
};
void readPt(struct point *p)
{
    scanf("%d%d",&p->x,&p->y);
}
float dist(struct point p1,struct point p2)
{
    float dist;
    dist=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
    return dist;
}
int main()
{
    struct point p1,p2;
    printf("\nEnter the Point 1 : ");
    readPt(&p1);
    printf("\nEnter the Point 2 : ");
    readPt(&p2);
    printf("\nDist b/n Points (%d,%d) and (%d,%d) is %f\n",p1.x,p1.y,p2.x,p2.y,dist(p1,p2));
}
