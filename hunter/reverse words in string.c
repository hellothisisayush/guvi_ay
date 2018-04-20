#include<stdio.h>
#include<stdlib.h>
int main(){

char str[50],temp;
int i,j,k,l;
printf("enter string");
gets(str);
l=strlen(str);
for(i=0,j=0;j<l;j++){

    if(str[j]==' ' || j==l-1){
            if(j<l-1){
                k=j-1;
            }
            else{
                    k=j;
            }
while(i<k){
    temp=str[i];
    str[i]=str[k];
    str[k]=temp;
    i++;
    k--;
}
i=j+1;
    }
}
printf("%s",str);
return 0;






}
