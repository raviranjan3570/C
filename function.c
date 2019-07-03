#include<stdio.h>
int maximum(int x, int y){
    return(x>y)?x:y;
}
void main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    int max= maximum(a,b);
    printf("The maximum value is:%d ",max);
}
