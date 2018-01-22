#include <stdio.h>
#include <stdlib.h>

int main()
{

int n,d;
printf("enter number");
scanf("%d",&n);
if(n<21){
d=fact(n);
printf("Factorial of %d is %d",n,d);
}
else{
    printf("input size is large");
}
    return 0;
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++){
        f=f*i;

    }
    return f;

}
