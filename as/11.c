/*11
Define a structure Student with name, rollno, marks of 5 subjects and total as
members. Develop C functions for the following:
a) Read the details on n students.
b) Print the details of n students.
c) Compute the total marks scored by each student and grand total.
Using these functions, develop a C program to read the details of n students and
compute the total marks scored by each student and grand total.
*/
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int roll;
    int marks[5];
    int total;
};
void read(struct student s[],int n)
{
    int i,j;
    printf("Enter the details of %d students\n",n);
    for(i=0;i<n;i++)
    {
        printf("\nname : ");
        scanf("%s",s[i].name);
        printf("roll no : ");
        scanf("%d",&s[i].roll);
        printf("marks in subject :\n");
        for(j=0;j<5;j++)
        {
            printf("%d  ",j+1);
            scanf("%d",&s[i].marks[j]);
            s[i].total+=s[i].marks[j];
        }
    }
}
void print(struct student s[],int n)
{
    int i;
    printf("\nDetails of %d students\n",n);
    printf("Name\t\tRoll\t\tTotal\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\n",s[i].name,s[i].roll,s[i].total);
    }
}
int main()
{
    int n,gt,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("\n");
    struct student s[n];
    read(s,n);
    print(s,n);
    for(i=0;i<n;i++)
        gt+=s[i].total;
    printf("\nGrand total = %d",gt);
    printf("\n");
    return 0;
}

