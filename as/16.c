/*Ques16:
Define a structure Address with following fields: character array street, character array
city, character array state. Define another structure Theatre with following fields:
theatre name, capacity, price per ticket and a member of struct Address type. Develop C
functions for the following:
a) Read the details on n theatres.
b) List all the theatres located in “Tumkur” city.c) List all the theatres starting with letter „A‟.
Using these functions, develop a C program to read the details of n theatres and list the
theatres located in “Tumkur” city and also theatres starting with letter „A‟.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct Address
{
    char street[30];
    char city[30];
    char state[30];
};
struct Theatre
{
    char name[30];
    int cap;
    int price;
    struct Address a;
};
void readCt(struct Theatre t[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
       printf("\nEnter the Details of Theatre %d\n",i+1);
       printf("NAME: ");
       scanf("%s",t[i].name);
       printf("Capacity: ");
       scanf("%d",&t[i].cap);
       printf("Price per Ticket: ");
       scanf("%d",&t[i].price);
       printf("Address\n");
       printf("Street: ");
       scanf("%s",t[i].a.street);
       printf("City: ");
       scanf("%s",t[i].a.city);
       printf("State: ");
       scanf("%s",t[i].a.state);
    }
}

void srchT(struct Theatre t[],int n)
{
    int i,flag=0;
    printf("\nList of theatres located in TUMKUR\n");
    for(i=0;i<n;i++)
    {
        if(strcmp(t[i].a.city,"Tumkur")==0)
        {
            if(flag==0)
            {
                printf("\nSuccesfull Search !!\n");
                printf("NAME\tCapacity\tPrice\tStreet\n");
                flag=1;
            }
            printf("%s\t%d\t%d\t%s\n",t[i].name,t[i].cap,t[i].price,t[i].a.street);
        }
    }
    if(flag==0)
        printf("No Theatre found in TUMKUR\n");
}
void srchA(struct Theatre t[],int n)
{
    int i,flag=0;
    printf("\nList of theatres starting with letter 'A'\n");
    for(i=0;i<n;i++)
    {
       if(t[i].name[0]=='A'||t[i].name[0]=='a')
        {
            if(flag==0)
            {
                printf("\nNAME\tCapacity\tPrice\tStreet\tCity\tState\n");
                flag=1;
            }
            printf("%s\t%d\t%d\t%s\t%s\t%s\n",t[i].name,t[i].cap,t[i].price,t[i].a.street,t[i].a.city,t[i].a.state);
        }
    }
    if(flag==0)
        printf("\nNo Theatre found with starting 'A'\n");
}

int main()
{
    int n;
    printf("Enter the number of records: ");
    scanf("%d",&n);
    struct Theatre t[n];
    readCt(t,n);
    srchT(t,n);
    srchA(t,n);
}
