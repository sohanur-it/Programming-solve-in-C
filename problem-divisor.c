#include <stdio.h>
#include <stdlib.h>

int main()
{

    int T,N;
    printf("Enter the values of test number:");
    scanf("%d",&T);
    for(int i=1 ; i<=T; i++){
    scanf("%d",&N);
    printf("Case %d :",i);
    //printf(" value=%d \n",N);
    for(int j=1; j<=N; j++){
        if(N % j == 0){
            printf("\t %d",j);
            }
        //printf("j values are :%d \n",j);
        }
        printf("\n");
    }
    return 0;
}
