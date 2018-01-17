#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,c,r,rev=0;
   printf("enter number you want to check");
   scanf("%d",&n);
   c=n;
   while(n>0){
    r=n%10;
    rev=rev*10+r;
    n=n/10;

   }
   if(rev==c){
    printf("number is palindrome");
   }
    else{
        printf("it is not a palindrome number");
    }

    return 0;
}
