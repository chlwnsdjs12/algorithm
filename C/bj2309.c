#include <stdio.h>
//일곱 난쟁이

int main(){
    int height[9];
    int sum;

    for(int i=0; i<9; i++){
        scanf("%d", &height[i]);
    }

    for(int i=1; i<9;i++){  //오름차순으로 정렬
        for(int j=1; j<9; j++){
            if(height[j-1] > height[j]){
                int save = height[j-1];
                height[j-1] = height[j];
                height[j] = save;
            }
        }
    }

    int a, b, out = 0;
    for(a=0; a<8; a++){         //최대 height[7]까지
        for(b=a+1; b<9; b++){   //최대 height[8]까지
            sum = 0;
            for(int i=0; i<9; i++){
               sum = sum + height[i];
            }
            sum = sum - height[a] - height[b];
            if(sum == 100){
                out = 1;
                break;
            }
        }
        if(out == 1){
            break;
        }
    }

    height[a] = 0;
    height[b] = 0;
    for(int i=0; i<9; i++){
        if(height[i] != 0){
            printf("%d\n", height[i]);
        }
    }
}