#include <stdio.h>

int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if(a == b){
        printf("%lld", b-a);
    }
    else if(a < b){
        printf("%lld\n", b-a-1);
        for(long long i=a+1; i<b; i++){
            printf("%lld ", i);
        }
    }
    else{
        printf("%lld\n", a-b-1);
        for(long long i=b+1; i<a; i++){
            printf("%lld ", i);
        }
    }
}