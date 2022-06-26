#include<stdio.h>
int main ()
{
 struct hostel
 {
   char name[80];
   int room;
   int fee;
 };
 int n;
 float sp;
 printf("enter no of hostels\n");
 scanf("%d",&n);
 struct hostel h[n];
 int i;
 for (i=0;i<n;i++)
  {
    printf("enter hostel name, no of rooms, average room charge of hostel %d\n",i+1);
    scanf("%s%d%d",h[i].name,&h[i].room,&h[i].fee);
  }
  printf("enter fee range\n");
  scanf("%f",&sp);
  for (i=0;i<n;i++)
  {
    if(h[i].fee<=sp)
    { 
       printf("\nhostel name %s\nno of rooms %d\naverage room charge of hostel %d\n",h[i].name,h[i].room,h[i].fee);
    }
  }  
}
