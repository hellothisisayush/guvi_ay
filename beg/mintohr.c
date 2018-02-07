#include<stdio.h>
void main(){

int min,hr=0;
printf("enter time in minutes");
scanf("%d",&min);
while(min>60){
    min=min-60;
    hr++;
}
printf("%d\t%d",hr,min);
}









