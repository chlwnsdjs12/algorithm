#include <stdio.h>

int main(){
    int a, b;
    int testcase;
    scanf("%d", &testcase);
    int array[testcase];
    int sum;

    for(int i=0; i<testcase;i++){
        scanf("%d %d", &a, &b);
        sum = a+b;
        array[i] = sum;
    }
    for(int j=0; j<testcase;j++){
        printf("%d\n", array[j]);
    }
}