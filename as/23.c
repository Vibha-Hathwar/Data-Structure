/*QUES23:
Read m integers into a file specified as second argument and read n integers into a file
specified as third argument. Append the contents of the file specified as third argument to
the file specified as second argument.
*/

#include<string.h>
#include<stdlib.h>
#include<stdio.h>

char *strrev(char *str){
    char c, *front, *back;

    if(!str || !*str)
        return str;
    for(front=str,back=str+strlen(str)-1;front < back;front++,back--){
        c=*front;*front=*back;*back=c;
    }
    return str;
}

void main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    fp1=fopen("input","w+");
    fp2=fopen("output","w+");
    int num,i,rev;
    for(i=1;i<argc;i++)
    {
        num=atoi(argv[i]);
        putw(num,fp1);
        rev=atoi(strrev(argv[i]));      //strrev warning
        putw(rev,fp2);                  //not executing
    }
    rewind(fp1);
    rewind(fp2);
    printf("\nINPUT ");
    while((num=getw(fp1))!=EOF)
      {
        printf("%d\t",num);
      }
    printf("\nOUTPUT ");
    while((num=getw(fp2))!=EOF)
      {
        printf("%d\t",num);
      }
    printf("\n");
    fclose(fp1);
    fclose(fp2);
}
