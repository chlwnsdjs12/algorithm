#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(0<x && 0<y){
        printf("1");
    }
    else if(x<0 && 0<y){
        printf("2");
    }
    else if(x<0 && y<0){
        printf("3");
    }
    else{
        printf("4");
    }
}