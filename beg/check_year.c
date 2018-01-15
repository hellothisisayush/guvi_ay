#include<stdio.h>
void main(){
int yr;
printf("enter year");
scanf("%d",&yr);
if(yr%4==0){
printf("entered year is a leap year");
}
else{
printf("no, it is not a leap year");
}
}
