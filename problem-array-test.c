#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int arr[10];
    printf("enter the number of arrays you want:");
    scanf("\n %d",&n);
    int sum=0;
    for(int i=0;i<n;i++){
        printf("enter the value%d:",i+1);
        scanf("%d",&arr[i]);
        printf("array[%d]= %d \n",i,arr[i]);
        sum=sum+arr[i];

        }
    printf("sum of the array values are = %d",sum);
    return 0;
}
