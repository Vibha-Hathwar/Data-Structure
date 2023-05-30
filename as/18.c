/*Ques18:
Generate an output file named “Ofile” using an input file named “Ifile” by removing all
occurrences of character „c‟ from the „Ifile‟.
*/

#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("Ifile","w+");
    fp2=fopen("Ofile","w+");
    printf("Enter a string   ");
    while((ch=getchar())!='\n')
        fputc(ch,fp1);
    printf("String is written to the file");
    rewind(fp1);
    while((ch=fgetc(fp1))!=EOF)
    {
        if(ch=='C'||ch=='c')
            continue;
        fputc(ch,fp2);
    }
    rewind(fp1);
    rewind(fp2);
    printf("\nINPUT FILE : ");
    while((ch=fgetc(fp1))!=EOF)
         printf("%c",ch);
    printf("\nOUTPUT FILE : ");
    while((ch=fgetc(fp2))!=EOF)
         printf("%c",ch);
   printf("\n");      
   fclose(fp1);
   fclose(fp2);
   return 0;
}
