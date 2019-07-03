#include<stdio.h>
void swap(int *,int *);
void main(){
    int x,y;
    printf("Enter the numbers to be swapped (x and y): ");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("After swapping: \n");
    printf("x= %d\n",x);
    printf("y= %d\n",y);
}
void swap(int *a, int *b){
    int temp;
    temp= *b;
    *b= *a;
    *a= temp;
}
