#include<stdio.h>
int main(){
    int n,k,c=0;
    printf("enter size of array");
    scanf("%d",&n);
    printf("no of shifts");
    scanf("%d",&k);
    int a[n],b[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int d=k;
    for(i=0;i<n;i++){


        if(d<n){
            b[k]=a[i];
            k++;
            d++;
        }
        else{
            k=c;
            b[k]=a[i];
            c=c+1;
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
return 0;


}
