#include<stdio.h>
void main()
{
int a,b,c;
printf("enter number 1:");
scanf("%d",&a);
printf("enter number 2:");
scanf("%d",&b);
printf("enter number 3:");
scanf("%d",&c);
if(a>b && a>c){
printf("a is greater");
}
else if(b>a && b>c){
printf("b is greater");
}
else{
printf("c is greater");
}
}