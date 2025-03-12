#include <stdio.h>

int main(){
    int array[4];
    int sum = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &array[j]);
            if(array[j] == 0){
                sum++;
            }
        }

        switch(sum){
            case 0:
                printf("E\n");
                sum = 0;
                break;
            case 1:
                printf("A\n");
                sum = 0;
                break;
            case 2:
                printf("B\n");
                sum = 0;
                break;
            case 3:
                printf("C\n");
                sum = 0;
                break;
            case 4:
                printf("D\n");
                sum = 0;
                break;
        }
    }
}