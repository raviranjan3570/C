#include<stdio.h>
int main(){
    int i, j, k, numberOfRows;
    printf("Enter the number of rows: ");
    scanf("%d",&numberOfRows);
    for(i = 1; i <= numberOfRows; i++){
        for(j = i; j <numberOfRows; j++){
            printf(" ");
        }
        for(k=1; k<(i*2); k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
