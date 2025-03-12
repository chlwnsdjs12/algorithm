#include <stdio.h>
#include <string.h>

int main(){
    int num[3];
    for(int i=0; i<3; i++){
        scanf("%d", &num[i]);
    }
    int result = num[0] * num[1] * num[2];

    int number[10];
    for(int i=0; i<10; i++){
        number[i] = 0;
    }

    char result_array[11];
    sprintf(result_array, "%d", result);
    for(int i=0; i<strlen(result_array); i++){
        for(int j=0; j<10; j++){
            int ascii = 48;
            if(result_array[i] == ascii + j){
                number[j] += 1;
            }
        }
    }

    for(int i=0; i<10; i++){
        printf("%d\n", number[i]);
    }
}