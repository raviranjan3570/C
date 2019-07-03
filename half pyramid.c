#include<stdio.h>
int main(){
    int i, j, numberOfRows;
    printf("Enter the number of rows: ");
    scanf("%d",&numberOfRows);
    for(i = 1; i <= numberOfRows; i++){
        for(j = 1; j <= i; j++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
