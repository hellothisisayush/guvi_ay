#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100000],i,n,c=1;
    printf("enter size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]*10+a[i+1]<26 && a[i]*10+a[i+1]>9){
            c++;
        }
    }
    printf("%d",c);








    return 0;
}
