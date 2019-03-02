#include <stdio.h>

int main(){

int n,row,col;
printf("Enter the value of n :");
scanf("%d",&n);
for(row=1;row<=n;row++){
    for(int col=1;col<=n-row;col++){
        printf(" ");
    }
    for(int col=1;col<=2*row-1;col++){
    printf("%d",col);
    }
    printf("\n");
}
return 0;
}

