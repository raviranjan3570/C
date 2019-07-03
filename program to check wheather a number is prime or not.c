#include<stdio.h>
int main(){
    int number, i, flag = 0;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(i = 2; i <= number/2; i++)
    {
        if(number%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0){
            printf("The number is a prime number.");
    }
    else{
        printf("The number is not a prime number.");
    }
    return 0;
}
