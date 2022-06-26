/*read 2 strings and compare them*/

#include<stdio.h>
#include<stdlib.h>
int main ()
{
  char s1[80],s2[80];
  int i=0;
  printf("enter 2 strings\n");
  scanf("%s%s",s1,s2);
  while(s1[i]==s2[i] &&s1[i]!=0)
    i++;
  if(s1[i]>s2[i])
   {
     printf("s1 is greater than s2\n");
   }
   else if(s1[i]<s2[i])
   {
     printf("s2 is greater than s1\n");  
   }
   else
   {
     printf("both strings are equal\n");
   }   
}
