#include <stdio.h>

int main(){

int n,row,col;
printf("Enter the value of n :");
scanf("%d",&n);
for(row=1;row<=n;row++){
    for(int col=1;col<=n;col++){
    if(row==n || col==1|| row==col){
    printf("*");
    }
    else{
    printf(" ");
    }

    }
    printf("\n");
}
return 0;
}






