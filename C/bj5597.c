#include <stdio.h>

int main(){
    int num;
    int compare[30];

    for(int i=0; i<30; i++){
        compare[i] = 0;
    }

    for(int i=0; i<28; i++){
        scanf("%d", &num);
        compare[num-1] = 1;
    }

    for(int i=0; i<30; i++){
        if(compare[i] == 0){
            printf("%d\n", i+1);
        }
    }
}