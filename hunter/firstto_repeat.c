#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100000],i,n,c=1,b[100000],j;
    printf("enter size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b[0]=a[0];
    for(i=1;i<n;i++){
        for(j=0;j<c;j++){
                if(a[i]==b[j]){
                    printf("%d",a[i]);
                    exit(0);
                }

        }
    }
    printf("unique");









    return 0;
}
