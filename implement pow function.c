#include<stdio.h>
int power(int, int);
int main(){
    int b,p,result;
    printf("Enter the base: ");
    scanf("%d",&b);
    printf("Enter the power: ");
    scanf("%d",&p);
    result= power(b,p);
    printf("The result is: %d",result);
}
int power(int base, int power){
    int i;
    for(i=1; power>0; power--){
        i= i*base;
    }
    return i;
}
