#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100000],i,n,min;
    printf("enter size of an array");

    scanf("%d",&n);
    printf("enter elements is array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){

        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}
