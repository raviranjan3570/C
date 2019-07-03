#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter the number: ");
        scanf("%d",&n);
    }
    while(n>=0);
    printf("negative value is: %d",n);
    return 0;
}
