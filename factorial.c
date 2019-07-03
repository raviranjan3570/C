#include<stdio.h>
int main(){
    int i,number;
    unsigned long factorial = 1;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number <= 0){
        printf("factorial of negative number doesn't exist");
    }
    else{
             for(i = 2; i <= number; i++){
        factorial *= i;
    }
    printf("factorial of %d is: %lu",number,factorial);
    }
    return 0;
}
