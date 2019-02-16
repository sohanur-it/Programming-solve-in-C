#include <stdio.h>

int main()
{
    int i;
    for(i=100;i>=1;i--){
    if(i%5==0){
    printf("\n %d ",i);
    }
    else{
    printf("\t %d",i);
    }
    }
    return 0;
}
