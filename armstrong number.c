#include<stdio.h>
#include<math.h>
int main(){
    int originalNumber, number;
    double remainder, result, count = 0;
    printf("Enter the number: ");
    scanf("%d",&originalNumber);
    number = originalNumber;
    while(number!= 0){
        number/= 10;
        count++;
    }
    number= originalNumber;
    while(number!= 0){
        remainder = number % 10;
        result += pow(remainder, count);
        number /= 10;
    }
    (result == originalNumber)? printf("The number is an amstrong number"): printf("The number is not an amstrong number");
    return 0;
}
