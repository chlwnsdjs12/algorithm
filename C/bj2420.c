#include <stdio.h>
#include <stdlib.h>

int main(){
    long long x, y;
    //int gap;
    scanf("%lld %lld", &x, &y);
    printf("%lld", llabs(x-y));
}