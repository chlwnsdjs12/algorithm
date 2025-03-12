#include <stdio.h>

int main(){
    int A;
    int B;
    double f;
    scanf("%d %d", &A, &B);
    f = (double)A/B;
    printf("%.9lf",f);
}