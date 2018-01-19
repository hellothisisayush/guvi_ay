#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f=1,i,n;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("factorial of %d is %d",n,f);
    return 0;
}
