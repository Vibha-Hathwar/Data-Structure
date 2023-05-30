/*QUES4:
Define a structure Student with following fields: name, USN and CGPA. Using this
structure, read the details of n students and print the average CGPA. Also, print the
details only those students whose CGPA>=average CGPA.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct student
    {
        char name[20];
        char usn[10];
        float cgpa;
    };
    int i,n,sum=0;
    float avg;
    printf("\nEnter the number of records: ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the details of student %d",i+1);
        printf("NAME: ");
        scanf("%s",s[i].name);
        printf("USN: ");
        scanf("%s",s[i].usn);
        printf("CGPA ");
        scanf("%f",&s[i].cgpa);
        sum=sum+s[i].cgpa;
    }
    avg=sum/n;
    printf("\navg=%f",avg);
    printf("\nSTUDENTS WHOSE CGPA IS GREATER THAN AVERAGE CGPA:\n");
    printf("NAME\tUSN\tCGPA\n");
    for(i=0;i<n;i++)
    {
        if(s[i].cgpa>=avg)
            printf("%s\t%s\t%f\n",s[i].name,s[i].usn,s[i].cgpa);
    }
}
