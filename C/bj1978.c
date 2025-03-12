#include <stdio.h>
#include <string.h>

int main(){
    int size;
    scanf("%d", &size);

    int array[size];
    for(int i=0; i<size; i++){
        scanf("%d", &array[i]);
    }

    int count = 0;
    int stop;
    for(int i=0; i<size; i++){
        if(array[i] == 1){
            continue;
        }
        stop = 0;
        for(int j=2; j<array[i]; j++){
            if((float)array[i]/(float)j <= 0 || array[i]%j == 0){
                stop = 1;
                break;
            }
        }
        if(stop == 0){
            count++;
        }
    }

    printf("%d", count);
}