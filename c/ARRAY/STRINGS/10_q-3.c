#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char string[100];
    char temp[100];
    char ans[100];
    printf("enter the string : ");
    gets(string);

    int i,j,k,count;

    int length=strlen(string);
    i=length;

    while(i>=0)
    {
        if(string[i]!=' ')
        {
            i--;
        }

        j=i;

        else
        {
            
        }

    }

    return 0;
}
































// int i,j,k,n;
    // int index=0;
    // char temp;
    // int length=strlen(string);

    // for(i=0,j=length-1;i<j;i++,j--)
    // {
    //     temp=string[j];
    //     string[j]=string[i];
    //     string[i]=temp;
    // }
    // puts(string);
    
    // for(j=0;string[j]!='\0';j++)
    // {
    //     for(i=0;string[i]!=' ';i++);

    //     for(;string[i]!='\0' && string[index]!='\0';i++)
    //     {
    //         temp=string[i];
    //         string[i]=string[index];
    //         string[index]=temp;
    //         index++;
    //     }
        
    // }
    // string[i]='\0';
    // puts(string);
    