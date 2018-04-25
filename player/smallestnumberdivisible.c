#include<stdio.h>
#include<stdlib.h>
int main(){
int L,R,i=1;
printf("enter two numbers");
scanf("%d%d",&L,&R);
int c=L*R;
while(1){
    if(i%L==0 && i%R==0){
        printf("%d",i);
        break;
    }
    i++;
}

return 0;







}
