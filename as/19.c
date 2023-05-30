/*QUES19:
Read integers as command line arguments and store them in a file specified as second
argument. Read each integer from this file and compute the sum of all the digits of the
integer and store it at corresponding position in another file specified as third argument.
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    fp1=fopen("second argument","w+");
    fp2=fopen("third argument","w+");
    int i, num,sum;
    for(i=1;i<argc;i++)
    {
        num=atoi(argv[i]);
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
    printf("second argument : ");
    while((num=getw(fp1))!=EOF)
    {
        printf("%d\t",num);
    }
    printf("\n");
    printf("third argument : ");
    while((num=getw(fp2))!=EOF)
    {
        printf("%d\t",num);
    }
    printf("\n");
    fclose(fp1);
    fclose(fp2);
}
