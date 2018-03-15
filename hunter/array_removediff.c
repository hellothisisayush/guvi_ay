#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],n,i,j,c=1,d=0;
    printf("enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b[0]=a[0];
    for(i=1;i<n;i++)
        {
            for(j=0;j<c;j++){
                if(a[i]==b[j]){
                    d=1;
                    break;
                }}
                    if(d==1){

                    }
                    else{
                    b[c]=a[i];
                    c++;
                    }
                    d=0;
                }




    for(i=0;i<c;i++){
        printf("%d\t",b[i]);
    }
    return 0;
}
