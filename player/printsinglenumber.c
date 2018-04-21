#include<stdio.h>
#include<stdlib.h>
int main(){
int arr[100000],n,i,j,f;
printf("enter no of numbers u want to enter");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
        f=1;
    for(j=0;j<n;j++){
            if(j!=i){
        if(arr[i]==arr[j]){
            f=0;
            break;
        }
    }
    }
    if(f==1){
        printf("%d",arr[i]);
    }
}
return 0;


}
