#include <stdio.h>

struct num{
    int struct_array[5];
};

int cal(struct num sa){
    int sum= 0;
    for(int i=0; i<5; i++){
        sum = sum + sa.struct_array[i] * sa.struct_array[i];
    }
    sum %= 10;
    return sum;
}

int main(){
    struct num array;
    for(int i=0; i<5; i++){
        scanf("%d", &array.struct_array[i]);
    }
    printf("%d", cal(array));
}