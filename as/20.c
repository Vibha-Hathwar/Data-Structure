ead two file names as command line arguments and write the contents of first file in
reverse order into second file.
*/

#include<stdlib.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    fp1=fopen(argv[1],"r");
    fp2=fopen(argv[2],"w+");
    char ch;
    int n=1;                                        //input cla existing new_file_name
    while(!fseek(fp1,-n,2))                         //segmentation fault core dumped
    {
        ch=fgetc(fp1);
        fputc(ch,fp2);
        n++;
    }
    rewind(fp1);
    rewind(fp2);
    printf("\ncontents of first file\n");
    while((ch=fgetc(fp1))!=EOF)
    {
        printf("%c\t",ch);
    }
    printf("\ncontents of second file\n");
    while((ch=fgetc(fp2))!=EOF)
    {
        printf("%c\t",ch);
    }
    printf("\n");
    fclose(fp1);
    fclose(fp2);
}

