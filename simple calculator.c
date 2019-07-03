#include<stdio.h>
int main()
{
    char operator;
    double a,b;
    printf("Enter the operator(+ - * / %): ");
    scanf("%c",&operator);
    printf("Enter the operands(a b): ");
    scanf("%lf %lf",&a,&b);
    switch(operator){
        case '+': printf("Addition is: %lf",a+b); break;
        case '-': printf("Subtraction is: %lf",a-b); break;
        case '*': printf("Multiplication is: %lf",a*b); break;
        case '/': printf("Division is: %lf",a/b); break;
        case '%': printf("Remainder is: %lf",a%b); break;
        default : printf("Enter valid operator");
    }
}

