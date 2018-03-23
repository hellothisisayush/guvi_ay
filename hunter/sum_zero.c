#include<stdio.h>
int main(){
int a[1000],i,j,k,n;
printf("enter no of elements");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
            if(a[i]+a[j]==0){
                printf("%d %d\n",a[i],a[j]);
            }

        }
    }

return 0;
}
