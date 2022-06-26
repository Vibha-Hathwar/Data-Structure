/*define a structure item with fowllowing feeds- char array and char ch. Using this structure, read a string and a charecter and replace each accurance*/

#include<stdio.h>
#include<string.h>
int main()
{
  struct string
  {
    char a[50];
    char ch;
  };
  struct string s;
  printf("enter a char array\n");
  scanf("%s",s.a);
  printf("enter a charecter\n");        //not working
  scanf("%c",&s.ch);
  int i;
  char temp;
  for(i=0;i<strlen(s.a);i++)
  {
    if(s.a[i]=='a')
    {
       temp=s.a[i];
       s.a[i]='a';
      
    }
  }
  printf ("string after replacing 'a' with %c is %s\n",s.ch,s.a);
}
