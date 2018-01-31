#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100000],i,n,sum=0,a,d,b;
    printf("enter elements ");
    scanf("%d",&n);
    printf("enter first element");
    scanf("%d",&a);
    printf("enter difference");
    scanf("%d",&d);
    b=a;
    for(i=1;i<n;i++){

        a=a+d;
        arr[i]=a;
    }
    arr[0]=b;

    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);

    return 0;
}
