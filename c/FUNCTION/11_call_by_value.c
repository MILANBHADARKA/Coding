#include<stdio.h>

void fun(int a)
{
    a=6;

}
int main(int argc, char const *argv[])
{
    int a=5;

    printf("before calling fun a=%d\n\n",a);

    fun(a);

    printf("after calling fun a=%d\n",a);
    return 0;
}
