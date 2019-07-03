#include<stdio.h>
int main(){
    int n,i,sum = 0;
    for(i=1; i<=10; i++){
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<=0){
        continue;
    }
        sum += n;
    }
    printf("The sum is: %d",sum);
    return 0;
}
