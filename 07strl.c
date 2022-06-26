/*find length of string using pointers*/

#include<stdio.h>
int main ()
{
   char str[80],*s=&str;
   printf("enter a string\n");
   gets(str);
   while (*s!='\0')
      s++;
   printf("length=%d\n",s-str);   
}
