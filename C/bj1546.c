#include <stdio.h>
#include <string.h>

int main(){
    int size;
    scanf("%d", &size);

    int array[size];
    for(int i=0; i<size; i++){
        scanf("%d", &array[i]);
    }

    int max=0;
    for(int i=0; i<size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }

    double sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + (double)array[i] / (double)max * 100;
    }
    double average = sum / (double)size;

    printf("%.14lf\n", average);
}