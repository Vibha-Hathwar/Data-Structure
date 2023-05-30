/*QUES21:
Read integers as command line arguments and store them in a file named “Integers”.
Read each integer from the file and store its unit digit at corresponding position in
another file named “Digits”
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    fp1=fopen("integers","w+");
    fp2=fopen("digits","w+");
    int num,i;
    char dig;
    for(i=1;i<argc;i++)
    {
        num=atoi(argv[i]);
        putw(num,fp1);
        dig=argv[i][strlen(argv[i])-1];
        fputc(dig,fp2);
    }
    rewind(fp1);
    rewind(fp2);
    printf("INTEGERS ");
    while((num=getw(fp1))!=EOF)
    {
        printf("%d\t",num);
    }
    printf("\nDIGITS ");
    while((dig=fgetc(fp2))!=EOF)
    {
        printf("%c\t",dig);
    }
     printf("\n");
    fclose(fp1);
    fclose(fp2);
}
