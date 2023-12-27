#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char string[100];
    printf("enter the string : ");
    gets(string);

    char ans[100];
    int i,j,k;
    int length=strlen(string)-1;

    for(i=0;i<length;i++)
    {
        for(j=0;i<length;i++,j++)
        {
            if(string[i]==' ' || string[i]=='\0')
            {
                break;
            }
            ans[j]=string[i];
        }
    }

    puts(ans);
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
    