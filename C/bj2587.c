#include <stdio.h>

int main(){
    int array[5];
    int sum = 0;
    int big;

    for(int i=0; i<5; i++){
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    for(int i=1; i<5; i++){
        for(int j=1; j<5; j++){
            if(array[j-1] > array[j]){
                big = array[j-1];
                array[j-1] = array[j];
                array[j] = big;        
            }
        }
    }
    printf("%d\n%d", sum/5, array[2]);
}