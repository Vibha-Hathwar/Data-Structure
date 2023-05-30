/*Ques14:
Define a structure PhoneContacts with following fields: name and phone number.
Develop C functions for the following:
a) Read the details of n phone contacts.
b) Print the details of n phone contacts.
c) Search for the specified name using Binary search technique and display the phone
number. (Assume the Phone contacts are sorted based on name)
Using these functions, develop a C program to read the details of n phone contacts and
search for the specified name using Binary search technique.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct PhoneContacts
{
    char name[20];
    char phn[10];
};
void readCt(struct PhoneContacts pc[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the Details of Contact %d\n",i+1);
        printf("NAME: ");
        scanf("%s",pc[i].name);
        printf("Phone Number: ");
        scanf("%s",pc[i].phn);
    }
}
void printCt(struct PhoneContacts pc[],int n)
{
    int i;
    printf("\nPhone Contacts\n");
    printf("\nNAME\t\tPHONE NUMBER\n");
    for(i=0;i<n;i++)
    {
     printf("%s\t\t%s\n",pc[i].name,pc[i].phn);
    }
}

void bsrch(struct PhoneContacts pc[],int n)
{
   char name[20];
   int i,low,mid,high;
   low=0;
   high = n-1;
   printf("\nEnter the name to search: ");
   scanf("%s",name);
   while(low<=high)
   {
       mid=(low+high)/2;
       if(strcmp(name,pc[mid].name)==0)
       {
         printf("\nPhone Number of %s is %s\n",pc[mid].name,pc[mid].phn);
         exit(0);
       }
       else if(strcmp(name,pc[mid].name)<0)
            high = mid-1;
       else
            low=mid+1;
   }
   printf("\n Contact %s is not found\n",name);
}
int main()
{
    int n;
    char name[20];
    printf("Enter the number of records: ");
    scanf("%d",&n);
    struct PhoneContacts pc[n];
    readCt(pc,n);
    printCt(pc,n);
    bsrch(pc,n);
}
