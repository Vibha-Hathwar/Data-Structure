/*Ques12:
Define a structure Contestant with name and votes as members. Develop C functions
for the following:
a) Read the details on n contestants.
b) Print the details of n contestants.
c) Find the winner of the CR election.
Using these functions, develop a C program to read the details of n contestants and find
the winner of the CR election.
*/
#include<stdio.h>
#include<stdlib.h>
struct Contestant
{
    char name[20];
    int votes;
};
void read(struct Contestant c[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the details of Contestant %d\n",i+1);
        printf("NAME: ");
        scanf("%s",c[i].name);
        printf("VOTES: ");
        scanf("%d",&c[i].votes);
    }
}
void display(struct Contestant c[],int n)
{
    int i;
    printf("\nContestant Details:");
    printf("\nNAME\tVOTES\n");
    for(i=0;i<n;i++)
        printf("%s\t%d\n",c[i].name,c[i].votes);
}
void win(struct Contestant c[],int n)
{
    int i,large=c[0].votes;
    for(i=1;i<n;i++)
    {
         if(large< c[i].votes)
            large=c[i].votes;
    }
       for(i=0;i<n;i++)
       {
           if(c[i].votes==large)
            printf("\nwinner - Contestant %s ,vote %d\n",c[i].name,c[i].votes);
       }
}
int main()
{
    int n;
    printf("Enter the number of records ");
    scanf("%d",&n);
    struct Contestant c[n];
    read(c,n);
    display(c,n);
    win (c,n);
}
