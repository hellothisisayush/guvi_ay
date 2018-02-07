#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int *a=malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

for(i=0;i<n;i++)
    printf("%d\t%d\n",a[i],i);

    return 0;
}
