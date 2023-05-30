/*5
Create a structure called Point to represent a point in a cartesian plane. Using this create another nested structure Segment which has two members of struct Point type(to represent end points). Create two structure variables of struct Segment type to represent two line segments whose coordinates are given as input. Check and display whether the two line segments are parallel to one another. (Hint: Compute slope of each of the line and compare it)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct point
    {
        int x,y;
    };
    struct segment
    {
        struct point a;
        struct point b;
    };
    struct segment s1,s2;
    printf("Enter 2 end points of 1st line segment : ");
    scanf("%d%d%d%d",&s1.a.x,&s1.a.y,&s1.b.x,&s1.b.y);
    int slope1,slope2;
    slope1=(s1.a.y-s1.b.y)/(s1.a.x-s1.b.x);
    printf("Enter end points of 2nd line segment : ");
    scanf("%d%d%d%d",&s2.a.x,&s2.a.y,&s2.b.x,&s2.b.y);
    slope2=(s2.a.y-s2.b.y)/(s2.a.x-s2.b.x);
    if(slope1==slope2)
        printf("Lines are Parallel\n");
    else
        printf("Lines are not Parallel\n");
}

