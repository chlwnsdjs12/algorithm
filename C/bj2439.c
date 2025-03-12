#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=n-i-1; j>0; j--){
            printf(" ");
        }
        for(int k=n-i-1; k<n; k++){
            printf("*");
        }
        printf("\n");
    }
}