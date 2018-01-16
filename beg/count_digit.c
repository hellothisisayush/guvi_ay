#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,c=0,r;
    printf("Enter the digit");
    scanf("%d",&n);
    while(n>0){
    n=n/10;
    ++c;

    }
    printf("%d",c);
    return 0;
}
