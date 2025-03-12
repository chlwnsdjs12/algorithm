#include <stdio.h>

int main(){
    int size;
    int num;
    int matchNum;
    int matchedNum = 0;
    scanf("%d", &size);
    int array[size];

    for(int i = 0; i<size;i++){
        scanf("%d", &num);
        array[i] = num;
    }

    scanf("%d", &matchNum);
    for(int j = 0; j<size;j++){
        if(array[j] == matchNum){
            matchedNum++;
        }
    }
    
    printf("%d", matchedNum);
}