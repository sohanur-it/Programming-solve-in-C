#include <stdio.h>
#include <stdlib.h>

int main()
{   int T,N,lsb,msb,div,sum;
    printf("enter the input numbers:");
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
    //printf("%d",i);
    scanf("%d",&N);
    if(N<10){
    lsb=N;
    msb=0;
    }
    else{
    lsb=N%10;
    //printf("%d\n",lsb);
    div=N/10;
    for(;div>10;){
        div=N/10;
        N=div;
        //printf("%d \n",div);
        msb=div;
    }
    }
    sum=0;
    sum=lsb+msb;
    printf("sum = %d \n",sum);

    }
}
