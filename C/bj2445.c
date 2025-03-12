#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n-1; i++){
        for(int j=0; j<i+1; j++){
            printf("*");
        }
        for(int j=2*i+1; j<2*n-1; j++){
            printf(" ");
        }
        for(int j=0; j<i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0; i<2*n; i++){
        printf("*");
    }
    printf("\n");
    for(int i=1; i<n; i++){
        for(int j=n-i; j>0; j--){
            printf("*");
        }
        for(int j=n-i; j<n; j++){
            printf("  ");
        }
        for(int j=n-i; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
}