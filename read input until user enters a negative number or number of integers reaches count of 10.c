#include<stdio.h>
int main(){
    int n,i,sum = 0;
    for(i=1; i<=10; i++){
    printf("Read integer: ");
    scanf("%d",&n);
    if(n<0){
        break;
    }
    }
    return 0;
}
