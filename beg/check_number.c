#include<stdio.h>
void main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
if(n>0 && n<=100000){
printf("Number is positive");
}
elseif(n==0){
printf("Number is zero");
}
else{
printf("Number is negative");
}
}

