#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100000],i,n,max=0;
    printf("enter size of an array");

    scanf("%d",&n);
    printf("enter elements is array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){

        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
