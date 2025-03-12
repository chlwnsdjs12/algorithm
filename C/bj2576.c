#include <stdio.h>

int main(){
    int array[7];
    int sum = 0;
    int sum_fail = 0;
    int min = 100;

    for(int i=0; i<7; i++){
        scanf("%d", &array[i]);
        if(array[i]%2 == 1){
            sum = sum + array[i];
            if(array[i] < min){
                min = array[i];
            }
        }
        if(array[i]%2 == 0){
            sum_fail++;
        }
    }
    if(sum_fail == 7){
        printf("%d", -1);
    }
    else{
        printf("%d\n%d", sum, min);
    }
}