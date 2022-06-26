/*define a structure item with fowllowing feeds- tnt quantity,float unit price. Using this structure, read quantity and unit price of the item and print total price of item */

#include<stdio.h>
int main()
{
  struct item
  {
    int quan;
    float unit;
  };
  struct item a;
  printf("enter quantity and unit price of the item \n");
  scanf("%d%f",&a.quan,&a.unit);
  printf("total price = %f\n",a.quan*a.unit);
}
