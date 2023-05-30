/*Ques17:
Define a structure Address with following fields: character array street, character array
city, character array state. Define another structure Theatre with following fields:
theatre name, capacity, price per ticket and a member of struct Address type. Develop C
functions for the following:
a) Read the details on n theatres.
b) Find the theatres with maximum capacity.
c) Find the theatres with least price per ticket.
Using these functions, develop a C program to read the details of n theatres and find the
theatres with maximum capacity and theatres with least price per ticket.
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

void display(struct Theatre t[],int n)
{
    int i;
    printf("\nNAME\tCapacity\tPrice\tStreet\tCity\tState\n");
    for(i=0;i<n;i++)
           printf("%s\t%d\t%d\t%s\t%s\t%s\n",t[i].name,t[i].cap,t[i].price,t[i].a.street,t[i].a.city,t[i].a.state);
}
void tkt(struct Theatre t[],int n)
{
    int i,least;
    least=t[0].price;
    for(i=1;i<n;i++)
    {
        if(t[i].price<least)
            least=t[i].price;
    }
    for(i=0;i<n;i++)
    {
       if(least==t[i].price)
        printf("\nTheatre %s has least price per ticket of %d\n",t[i].name,t[i].price);
    }
}
void cap(struct Theatre t[],int n)
{
    int i,large;
    large=t[0].cap;
    for(i=1;i<n;i++)
    {
        if(t[i].cap>large)
            large=t[i].cap;
    }
    for(i=0;i<n;i++)
    {
       if(large==t[i].cap)
       printf("\nTheatre %s has maximum capacity with %d\n",t[i].name,t[i].cap);
    }
}
int main()
{
    int n;
    printf("\nEnter the number of records:");
    scanf("%d",&n);
    struct Theatre t[n];
    readCt(t,n);
    cap(t,n);
    tkt(t,n);
}

