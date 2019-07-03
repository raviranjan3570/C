#include<stdio.h>
/* Fahrenheit - Celsius table for
Fahrenheit = 0, 20, ..., 300. */
main(){
float Fahrenheit, Celsius;
int lower_limit, upper_limit, steps;
lower_limit = 0;
upper_limit = 300;
steps = 20;
Fahrenheit = lower_limit;
while (Fahrenheit <= upper_limit){
    Celsius = 5.0*(Fahrenheit - 32.0)/9.0;
    printf("%3.0f\t %3.1f\n",Fahrenheit,Celsius);
    Fahrenheit += steps;
}
}
