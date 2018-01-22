#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[20],i,l;
    printf("enter a string");
    scanf("%s",&ch);
    l=strlen(ch);

    for(i=l-1;i>=0;i--){
        printf("%c",ch[i]);
    }

    return 0;
}
