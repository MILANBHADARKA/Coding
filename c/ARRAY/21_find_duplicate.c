#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);

    int a[n];
    int i,j;
    printf("enter the element of array : \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int flag=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("find duplicate of %d at index %d\n",a[i],j);
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("duplicate not found");
    }

    return 0;
}