#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,j;
    printf("enter 1 number");
    scanf("%d",&a);
    printf("enter 2 number");
    scanf("%d",&b);
    for (i=a+1;i<b;i++){
            int prime=1;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    prime=0;
                    break;
                }
            }
    if(prime)
            printf("%d\t",i);

            }


    return 0;
}
