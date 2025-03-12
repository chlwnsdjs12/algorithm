#include <stdio.h>

int main(){
    int array[9];
    int max = 0;
    int max_num;

    for(int i=0; i<9; i++){
        scanf("%d", &array[i]);
        if(array[i] > max){
            max = array[i];
            max_num = i + 1;
        }
    }

    printf("%d\n%d", max, max_num);
}