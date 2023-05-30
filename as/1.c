/*
Define a structure faculty with following members: name, designation, workload. Using
this structure, read the details of a faculty and assign the workload to the faculty as
follows:
28 units for Professor
32 units for Assistant Professor.
Print the faculty details with suitable messages.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()                  //error
{
  struct faculty
  {
    char name[20];
    char desg;
    int wload;
  };
  int i,n;
  char b;
  printf("enter no of records ");
  scanf("%d",&n);
  struct faculty f[n];
  for(i=0;i<n;i++)
  {
     printf("\nenter details of faculty %d\n ",i+1);
     printf("designation <space> name:\n");
     scanf("%s",f[i].name);
     getc(f[i].desg);
     scanf("%c",&f[i].desg);
     printf("Test :%s,\t %c",f[i].name,f[i].desg);
     if(f[i].desg=='p')
          f[i].wload=28;
     else
          f[i].wload=32;
  }
  printf("\nfaculty details\n");
  printf("name\tdesignation\tworkload\n");
  for(i=0;i<n;i++)
     printf("%s\t%c\t%d\n",f[i].name,f[i].desg,f[i].wload);
}
