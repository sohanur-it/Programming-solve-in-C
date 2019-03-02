#include <stdio.h>

int main(){
int n,row,col;
printf("Enter the value of n: ");
scanf("%d",&n);
int count=0;

for(row=1;row<=n;row++){

    for(col=1;col<=row;col++){
    count++;
    printf("%d",count);
    }
    printf("\n");

}

return 0;
}
