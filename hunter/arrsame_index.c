#include<stdio.h>
int main(){
int a[100000],b[100000],i,j=0,n;
printf("enter number of elements");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    if(a[i]==i){
        b[j]=i;
        j++;
    }
}
if(j==0){
    printf("-1");
}
else{
for(i=0;i<j;i++)
    printf("%d\t",b[i]);
}

return 0;
}
