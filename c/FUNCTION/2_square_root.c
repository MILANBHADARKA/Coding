#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a;

    printf("enter the int value of a : ");
    scanf("%d",&a);
    int root = sqrt(a);
    printf("the sruare root of %d : %d",a,root);
    return 0;
}
