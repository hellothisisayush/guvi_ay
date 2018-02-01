#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1000],i,j,temp,n,mid;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    if(n%2==0){
        mid=(n/2)+1;

    }
    else{
        mid=(n+1)/2;
    }
    printf("%d\n",arr[mid-1]);

    return 0;
}
