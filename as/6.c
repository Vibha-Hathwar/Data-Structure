/*6
Define a structure Hotel with following fields: hotel name, no. of rooms, average room
charge. Using this structure, read the details of n hotels and print the details of a
specified hotel in the increasing order of average room charge.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct hotel
    {
        char hname[20];
        int number;
        int average;
    };
    int n,i,j;
    char name[20];
    printf("Enter the value of n : ");
    scanf("%d",&n);
    struct hotel h[n],temp;
    printf("Enter the details of %d hotels : ",n);
    for(i=0;i<n;i++)
    {
        printf("\nhotel name : ");
        scanf("%s",h[i].hname);
        printf("Number of rooms : ");
        scanf("%d",&h[i].number);
        printf("Average room charge : ");
        scanf("%d",&h[i].average);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(h[j].average>h[j+1].average)
            {
                temp=h[j];
                h[j]=h[j+1];
                h[j+1]=temp;
            }
        }
    }
    printf("\nname\tno of rooms\tavg room charge\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\n",h[i].hname,h[i].number,h[i].average);
    }                   //print details of specified hotel in increasing order of avg room charge 
    printf("Enter the hotel name to search for : ");
    scanf("%s",name);
    printf("\nname\tno of rooms\tavg room charge\n");
    for(i=0;i<n;i++)
    {
        if(strcmp(name,h[i].hname)==0)
            printf("%s\t\t%d\t\t%d\n",h[i].hname,h[i].number,h[i].average);
    }
}
