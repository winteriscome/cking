#include <stdio.h>

#define N 10000

main(){
        int i, j, a[N];
        for(i=2;i<N;i++){
            a[i] =1;
        }

        for(i =2;i<N; i++){
            for(j=i;i*j<N;j++){
                a[i*j]=0;
            }
        }

        for(i=2;i<N;i++){
            if(a[i] == 1){
                printf("%4d\n",i);
            }
        }
}