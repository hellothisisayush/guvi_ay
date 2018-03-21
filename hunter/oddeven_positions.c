#include<stdio.h>
int main(){
int a[100000],i,n;
printf("enter elements in array");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    if(a[i]%2!=0 && i%2==0 || a[i]%2==0 && i%2!=0){
        printf("%d ",a[i]);
    }
}
return 0;
}
