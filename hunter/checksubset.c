#include<stdio.h>
int main(){
int a[100000],i,j,n,m,b[100000],f=0;
printf("enter no of elements for first array");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter elements for second array");
scanf("%d",&m);

for(j=0;j<m;j++){
    scanf("%d",&b[j]);
}
for(j=0;j<m;j++){
    for(i=0;i<n;i++){
            if(b[j]!=a[i]){
                f=0;
            }
            else{
                f=1;
                break;
            }


            }}
            if(f==1){
        printf("Yes");
    }
    else{
        printf("no");
    }

return 0;
}
