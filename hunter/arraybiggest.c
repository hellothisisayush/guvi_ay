#include<stdio.h>
int main(){
int a[100000],i,j,n,temp,f=0;
printf("enter number of elements");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[j]>a[i]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }
}
for(i=0;i<n;i++){
    if(a[i]!=0){
        f=1;
        break;
    }
}
if(f==1){
for(i=0;i<n;i++){
        if(a[i]!=0)
    printf("%d",a[i]);
}}
else{
    printf("%d",a[0]);
}
return 0;
}
