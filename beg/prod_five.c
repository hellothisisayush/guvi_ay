#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,prod=1;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=5;i++){
        prod=n*i;
        printf("%d\t",prod);
    }
    return 0;
}
