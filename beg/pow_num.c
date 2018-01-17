#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,pow,c=1,i;
    printf("enter number");
    scanf("%d",&num);
    printf("enter power");
    scanf("%d",&pow);
    for(i=1;i<=pow;i++){
        c=c*num;
    }
    printf("%d to the power of %d is%d",num,pow,c);
    return 0;
}
