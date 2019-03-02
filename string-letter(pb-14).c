#include <stdio.h>
#include <string.h>
int main()
{
int T;
char first_line[100];
char second_line[2];
printf("Enter the input times:");
scanf("%d",&T);
for(int i=1;i<=T;i++){
printf("Enter a string:");
scanf("%s", first_line);
printf("enter a letter:");
scanf("%s", second_line);
printf("Your string: %s\n", first_line);
printf("Your letter: %s\n", second_line);
int count=0;
for(int i=0;i<strlen(first_line);i++){
    if(second_line[0]==first_line[i]){
        count=count+1;
    }
}
//printf("%d",count);
if(count==0){
    printf(" '%c' is not present in '%s' \n",second_line[0],first_line);
}
else{
    printf("Occurance of '%c' in '%s' = %d \n",second_line[0],first_line,count);
}
}
return 0;
}
