#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    if(x > y){
        int save = x;
        x = y;
        y = save;
    }

    int min, max;
    for(int i=1; i<y+1; i++){
        if(x%i==0 && y%i==0){
            min = i;
        }
    }

    max = x * y / min;

    printf("%d\n%d", min, max);
}