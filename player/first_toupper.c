#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[30],i,l;
    printf("enter string");
    gets(arr);

    l=strlen(arr);
    for(i=0;i<l;i++){
        if(i==0){
            arr[0]=toupper(arr[0]);
        }
            if(arr[i]==' '){

                arr[i+1]=toupper(arr[i+1]);

            }

    }

    printf("%s",arr);
    return 0;
}
