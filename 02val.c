/*read an integer and check whether it is greater than 50 or less than 50 or equal to 50*/

#include<stdio.h>
int main()
{
 int a;
 printf("enter an integer\n");
 scanf("%d",&a);
 if(a>50)
    printf("%d is greater than 50\n",a);
 else if(50>a)
    printf("50 is greater than %d\n",a);    
 else
    printf("50 is equal to 50\n");
}     
