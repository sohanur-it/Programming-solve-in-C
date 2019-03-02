#include <stdio.h>

int main(){

int n,row,col;
printf("Enter the value of n :");
scanf("%d",&n);
for(row=n;row>=1;row--){
    for(int col=1;col<=n-row;col++){
        printf(" ");
    }
    for(int col=1;col<=row;col++){
    printf("%d ",row);
    }
    printf("\n");
}
return 0;
}




