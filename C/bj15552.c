#include <stdio.h>

int main(){
    int testcase;
    int a, b;
    int sum;
    scanf("%d", &testcase);
    for(int i= 0; i<testcase;i++){
        scanf("%d %d", &a, &b);
        sum = a + b;
        printf("%d\n", sum);
    }
}