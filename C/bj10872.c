#include <stdio.h>

int main(){
    int n;
    int result=1;
    scanf("%d", &n);
    if(n == 0){
        printf("1");
    }
    else{
        for(int i=0; i<n;i++){
            result *= i+1;
        }
        printf("%d", result);
    }
}