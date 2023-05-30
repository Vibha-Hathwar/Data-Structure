/*8
Define a structure to represent a Fraction. Develop C functions for the following:
a) Read a fraction using pass by reference method.
b) Print a fraction using pass by value method.
c) Compute sum of two fractions. (The function should receive two fractions by value
and return resultant fraction computed)
Using these functions, develop a C program to read two fractions and compute their
sum.
*/
#include <stdio.h>
#include <stdlib.h>
struct fraction
{
    int num,den;
};
void read(struct fraction *f)
{
    scanf("%d%d",&f->num,&f->den);
}
void print(struct fraction f)
{
    printf("%d/%d",f.num,f.den);
}
struct fraction sum(struct fraction f1,struct fraction f2)
{
    struct fraction f3;
    f3.num=(f1.num*f2.den)+(f2.num*f1.den);
    f3.den=f1.den*f2.den;
    return(f3);
}
int main()
{
    struct fraction f1,f2,f3;
    printf("Enter the numerator & denominator of first fraction :");
    read(&f1);
    printf("\nEnter the numerator & denominator of second fraction :");
    read(&f2);
    f3=sum(f1,f2);
    printf("\nFraction 1 :");print(f1);
    printf("\nFraction 2 :");print(f2);
    printf("\nsum  :");print(f3);
    printf("\n");
    return 0;
}
