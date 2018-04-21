#include<stdio.h>
#include<math.h>
int main(){
char str[50],str1[50];
int i=0,j=0,k;
printf("enter string");
scanf("%s",str);
while(str[j]!='\0'){
    if(str[j]=='A'||str[j]=='a'||str[j]=='E'||str[j]=='e'||str[j]=='I'||str[j]=='i'||str[j]=='O'||str[j]=='o'||str[j]=='U'||str[j]=='u'){
        j++;
        }
        else{
            str1[i++]=str[j];
            j++;
        }


}
str1[i]='\0';
int l=strlen(str1);
for(k=l-1;k>=0;k--){
    printf("%c",str1[k]);
}
return 0;
}
