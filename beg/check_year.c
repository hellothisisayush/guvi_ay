#include<stdio.h>
void main(){
int yr;
printf("enter year");
scanf("%d",&yr);
if(yr%400==0)
printf("entered year is a leap year");
else if(yr%100==0)
printf("no, it is not a leap year");
else if(yr%4==0)
printf(" it is  a leap year");
else
printf("it is not");

}
