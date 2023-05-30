/*QUES24:
Read strings at the command line and print each string, its first character and its last
character.
*/

#include<stdlib.h>
#include<stdio.h>
int main(int argc,char*argv[])
{
    int i;
    printf("NAME\tFIRST CHAR\tLAST CHAR\n");
    for(i=1;i<argc;i++)
    {
        printf("%s\t%c\t\t%c\n",argv[i],argv[i][0],argv[i][strlen(argv[i])-1]);
    }
    return 0;
}
