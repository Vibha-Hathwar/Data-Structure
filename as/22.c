/*QUES22:
Read m integers into a file specified as second argument and read n integers into a file
specified as third argument. Append the contents of the file specified as third argument to
the file specified as second argument.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("second argument","w+");
    fp2=fopen("third argument","w+");
    int n,m,i,num;
    printf("Enter number of integers in second argument ");
    scanf("%d",&n);
    printf("Enter number of integers in third argument ");
    scanf("%d",&m);
    printf("Enter %d integers in second argument: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        putw(num,fp1);
    }
    printf("Enter %d integers in third argument: ",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&num);
        putw(num,fp2);
    }
    rewind(fp2);
    for(i=n;i<m+n;i++)
    {
        num=getw(fp2);
        putw(num,fp1);
    }
    rewind(fp1);
    rewind(fp2);
    printf("\nappended second argument: ");
    while((num=getw(fp1))!=EOF)
    {
        printf("%d\t",num);
    }
    printf("\n");
    /*
       printf("\nthird argument: ");
       while((num=getw(fp2))!=EOF)
       {
         printf("%d\t",num);
       }
    */
    
    fclose(fp1);
    fclose(fp2);
} 
