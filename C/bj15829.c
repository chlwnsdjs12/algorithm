#include <stdio.h>
#include <string.h>
#include <math.h>
//해시 함수
int main(){
    int size;
    scanf("%d\n", &size);
    char apb[size+1];
    gets(apb);

    long long pow_array[51];
    pow_array[0] = 1;
    for(int i=1; i<51; i++){
        pow_array[i] = pow_array[i-1] * 31 % 1234567891;
    }

    long long sum=0;
    for(int i=0; i<strlen(apb); i++){
        long long alphabet = apb[i] - 'a' + 1;
        sum = sum + alphabet*pow_array[i];
    }
    printf("%lld", sum % 1234567891);
}