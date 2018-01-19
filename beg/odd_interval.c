#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    printf("enter 1 number");
    scanf("%d",&a);
    printf("enter 2 number");
    scanf("%d",&b);
    for (i=a+1;i<b;i++){
            if(i%2!=0){
                printf("%d\t",i);
            }

    }
    return 0;
}
