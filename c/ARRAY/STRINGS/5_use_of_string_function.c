#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s1[100];
    char s2[100];
    int i,j;

    printf("enter s1");
    gets(s1);
    printf("enter s2");
    gets(s2);

    strcat(s1,s2);   //joint s2 in s1 at the end of s1.

    puts(s1);

    return 0;
}
