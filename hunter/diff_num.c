#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100000],i,n,j,c=1;
    printf("enter size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
        if(a[i]==a[j] && i!=j){
            c++;
        }
        }
        if(c<2){
            printf("%d",a[i]);
        }
        else{
            c=1;
        }
    }








    return 0;
}
