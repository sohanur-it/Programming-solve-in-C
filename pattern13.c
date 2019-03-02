#include <stdio.h>

int main(){

int n,row,col;
printf("Enter the value of n :");
scanf("%d",&n);
for(row=1;row<=n;row++){
    for(int col=1;col<=row;col++){
        printf("%d",row*col);
    }
    printf("\n");
}
return 0;
}
