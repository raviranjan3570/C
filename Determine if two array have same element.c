#include<stdio.h>
int isEqual(int *, int *, int , int );
int main(){
    int x[5];
    int y[5];
    for(int i=0; i<5; i++){
    printf("Enter the element number %d of an array x: ",i);
    scanf("%d",&x[i]);
    }
    for(int j=0; j<5; j++){
    printf("Enter the element number %d of an array y: ",j);
    scanf("%d",&y[j]);
    }
    int z= isEqual(x,y,5,5);
    if(z==1){
        printf("The two arrays have a common element");
    }
        else{
            printf("The two arrays don't have a common element");
        }
    }
int isEqual(int a[], int b[], int m, int n){
    int i,j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(a[i]==b[j]){
                return 1;
            }
        }
    }
}
