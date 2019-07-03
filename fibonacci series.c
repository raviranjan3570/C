#include<stdio.h>
int main(){
    int numberOfTerms, firstNumber, secondNumber, sum, counter= 0;
    printf("Enter the number of terms: ");
    scanf("%d",&numberOfTerms);
    printf("Enter first number: ");
    scanf("%d",&firstNumber);
    printf("Enter second number: ");
    scanf("%d",&secondNumber);
    while(counter<numberOfTerms){
        sum= firstNumber + secondNumber;
        printf("%d\n",sum);
        firstNumber= secondNumber;
        secondNumber= sum;
        counter++;
    }
    return 0;
}
