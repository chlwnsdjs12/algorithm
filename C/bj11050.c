#include <stdio.h>

int factorial(int n){
    if(n == 0){
        return n = 1;
    }
    else{
        return n = n * factorial(n-1);
    }
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    printf("%d", factorial(n)/(factorial(k)*factorial(n-k)));
}