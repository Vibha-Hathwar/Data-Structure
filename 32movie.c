#include<stdio.h>
#include<string.h>
int main ()
{
 struct movie
 {
   char name[80];
   char pro[80];
   char dir[80];
 };
 int n;
 printf("enter no of movies\n");
 scanf("%d",&n);
 struct movie h[n];
 int i;
 for (i=0;i<n;i++)
  {
    printf("enter movie title, producer name,director name of movie %d\n",i+1);
    scanf("%s%s%s",h[i].name,h[i].pro,h[i].dir);
  }
  printf("movies directed by Rockline are\t");
  for (i=0;i<n;i++)
  {
    if(strcmp(h[i].dir,"rockline")==0)
    { 
       printf("%s\t",h[i].name);
    }
  }  
}
