#include <stdio.h>

int main(){
    int array[3];
    int save;

    for(int i=0; i<3; i++){
        scanf("%d", &array[i]);
    }
    
    while(1){
        for(int i=1; i<3; i++){
            if(array[i-1] > array[i]){
                save = array[i-1];
                array[i-1] = array[i];
                array[i] = save;
            }
        }
        if(array[0] < array[1] && array[1] < array[2]){
            break;
        }
    }

    for(int i=0; i<3; i++){
        printf("%d ", array[i]);
    }
}