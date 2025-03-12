#include <stdio.h>

int main(){
    int array[3];
    
    for(int i=0; i<3; i++){
        scanf("%d", &array[i]);
    }

    if(array[0] == array[1] && array[1] == array[2]){
        printf("%d", 10000+array[0]*1000);
    }
    else if(array[0] != array[1] && array[1] != array[2] && array[0] != array[2]){
        int biggest;

        for(int i=1; i<3; i++){
            if(array[i-1] > array[i]){
                biggest = array[i-1];
                array[i-1] = array[i];
                array[i] = biggest;
            }
        }

        printf("%d", array[2]*100);
    }
    else{
        if(array[0] == array[1]){
            printf("%d", 1000+array[0]*100);
        }
        else if(array[1] == array[2]){
            printf("%d", 1000+array[1]*100);
        }
        else{
            printf("%d", 1000+ array[0]*100);
        }
    }

}