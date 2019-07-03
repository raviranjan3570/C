#include<stdio.h>
int main(){
    int a= 5;
    int *p= &a;
    printf("%d\n",a);
    printf("%u\n",&a);
    printf("%u\n",p);
    printf("%d\n",*p);
    printf("%u\n",&p);
}
