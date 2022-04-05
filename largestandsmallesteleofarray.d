#include<stdio.h>
int main()
{
    long int a[15],i,n,small,large;
    printf("number of elements in array are:",n);
    scanf("%ld",&n);
    printf("the elements are:",a[n]);
    for(i=0;i<n;i++)
         scanf("%ld",&a[i]);
         
    small=a[0];
    large=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<=small){
            small=a[i];
        }
    }
    printf("the smallest element is:%ld\n",small);
    for(i=0;i<n;i++)
    {
        if(a[i]>=large)
        {
            large=a[i];
        }
    }
    printf("the largest element is: %ld\n",large);
    
    return 0;

}
