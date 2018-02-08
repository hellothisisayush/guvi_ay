#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hr1,hr2,min1,min2,hr3=0,t0,t1,t2;
    printf("enter hr and min 1");
    scanf("%d%d",&hr1,&min1);
    printf("enter hr and min 2");
    scanf("%d%d",&hr2,&min2);
    t1=(hr1*60)+min1;
    t2=(hr2*60)+min2;
    if(t1>t2){
      t0=t1-t2;
    }
    while(t0>60){

        t0=t0-60;
        hr3++;

    }
    printf("%d\t%d",hr3,t0);
    return 0;
}
