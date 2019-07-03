#include<stdio.h>
int main(){
    int number, originalNumber, remainder, reversedNumber= 0;
    printf("Enter the number: ");
    scanf("%d",&originalNumber);
    number= originalNumber;
    while(number!= 0){
        remainder= number%10;
        reversedNumber= reversedNumber*10 + remainder;
        number/= 10;
    }
    (originalNumber==reversedNumber)?printf("Palindrome"):printf("Not a palindrome");
    return 0;
}
