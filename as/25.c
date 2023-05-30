/*QUES 25:
Read n integers and store them in a file. Compute the sum of each digit of the number
and store it at the corresponding position in another file.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("integer","w+");
    fp2=fopen("sum","w+");
    int n,i,num,sum;
    printf("Enter number of integers: ");
    scanf("%d",&n);
    printf("Enter integers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        putw(num,fp1);
        sum=0;
        while(num!=0)
        {
            sum+=num%10;
            num=num/10;
        }
        putw(sum,fp2);
    }
    rewind(fp1);
    rewind(fp2);
    printf("Numbers: ");
    while((num=getw(fp1))!=EOF)
    {
        printf("%d\t",num);
    }
    printf("\nsum of each digit of number: ");
    while((num=getw(fp2))!=EOF)
    {
       printf("%d\t",num);
    }
    printf("\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}

