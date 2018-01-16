#include<stdio.h>
void main(){
int x,y,arr[x],sum=0,i;
printf("enter two numbers");
scanf("%d%d",&x,&y);
for(i=1;i<=x;i++)
arr[i]=i;
for(i=1;i<=y;i++){
sum+=i;
}
printf("%d",sum);
}