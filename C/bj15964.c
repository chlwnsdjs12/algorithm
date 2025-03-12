#include <stdio.h>

long long cal(int a, int b){
    return (long long)(a+b)*(a-b);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%lld", cal(a,b));
}