#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,x=1;
    printf(" enter number",n);
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        x=x*i;
        
    }
    printf("%d",x);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
