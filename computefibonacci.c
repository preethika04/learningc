#include<stdio.h>
int main()
{
    int a[20],i,n=10,x;
    for(i=2;i<n;i++)
    {
        a[0]=a[1]=1;
        a[i]=a[i-1]+a[i-2];
    }
    printf("");
    scanf("%d",&x);
    for(i=0;i<n;i++)
        if(i==x)
        {
            printf("%d",&a[i-1]);
            break;
        }
}
