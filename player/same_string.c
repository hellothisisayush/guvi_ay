        #include <stdio.h>

        int main()

        {
            char a[10],b[10],l1,l2,i,j,count=0;
            printf("enter string 1");
            scanf("%s",&a);
            printf("enter string 2");
            scanf("%s",&b);
            l1=strlen(a);
            l2=strlen(b);
            if(l1!=l2){
                printf("different");
                exit(0);
            }

            for(j=0;j<l2;j++){
                if(b[j]!=a[j]){
                    count+=1;

                    }
                }


            if(count>=1){
                printf("different");
            }
            else{
                printf("same");
            }
            return 0;
            }

