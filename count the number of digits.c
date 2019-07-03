#include<stdio.h>
int main(){
    int number, count = 0;
    printf("Enter the number: ");
    scanf("%d",&number);
    while(number!= 0){
        number/= 10;
        count++;
    }
    printf("The size of number is: %d",count);
    return 0;
}
