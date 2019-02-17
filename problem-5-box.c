#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,N;
    printf("Enter an input number:");
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        for(int j=1;j<=N;j++){
            //printf("%d ",j);
            for(int k=1;k<=N;k++){
            printf("* ",k);
            }
            printf("\n");
        }
        printf("\n");

    }

}
