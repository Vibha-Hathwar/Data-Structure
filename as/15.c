/*Ques15:
Define a structure Address with following fields: character array street, character array
city, character array state. Define another structure Theatre with following fields:
theatre name, capacity, price per ticket and a member of struct Address type. Develop C
functions for the following:
a) Read the details on n theatres.
b) Print the details of n theatres.
c) Sort the theatres in ascending order based on the theatre name.
Using these functions, develop a C program to read the details of n theatres and sort
them in ascending order based on the theatre name.
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
    printf("\nNAME\tCapcty\tPrice\tStreet\tCity\tState\n");
    for(i=0;i<n;i++)
         printf("%s\t%d\t%d\t%s\t%s\t%s\n",t[i].name,t[i].cap,t[i].price,t[i].a.street,t[i].a.city,t[i].a.state);
}
void sort(struct Theatre t[],int n)
{
    struct Theatre temp;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
            if(strcmp(t[j].name,t[j+1].name)>0)
            {
                temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
    }
    printf("\nList of Theatre after sorting based on NAME\n");
    printf("NAME\tCapacity\tPrice\tStreet\tCity\tState\n");
    for(i=0;i<n;i++)
    printf("%s\t%d\t\t%d\t%s\t%s\t%s\n",t[i].name,t[i].cap,t[i].price,t[i].a.street,t[i].a.city,t[i].a.state);
}
int main()
{
    int n;
    printf("Enter the number of records: ");
    scanf("%d",&n);
    struct Theatre t[n];
    readCt(t,n);
    display(t,n);
    sort(t,n);
}

