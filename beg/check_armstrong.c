#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n,r,c=0,sum=0,arm;
    printf("enter number");
    scanf("%d",&n);
          arm=n;
    while(n>0){
        n=n/10;
        ++c;

    }
    n=arm;
    while(n>0){
        r=n%10;
        sum=sum+pow(r,c);
        n=n/10;
        }
    if(arm==sum){
        printf("yes");
    }
    else{
        printf("no");
    }

    return 0;
}
