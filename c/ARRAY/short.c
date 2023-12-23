#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    int a[100];
    int temp;

    printf("enter the value of n:");
    scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("\n");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}

    return 0;
}
