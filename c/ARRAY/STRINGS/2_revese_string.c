#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[100];   //we can not only initilize string with out size.
                     //if we want to intilize string with out given size then also declare string at tie of intilization.
    puts("enter the string"); //we can use puts also to print
    gets(str);
    printf("entered string is \n");
    puts(str);

    int i,j,length;

    length=strlen(str);   //strlen() IS for find length of string

    // length=0;
    // for(i=0;str[i]!='\0';i++)
    // {
    //     length++;
    // }
    // printf("%d\n",length);

    for(i=length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }

    return 0;
}
