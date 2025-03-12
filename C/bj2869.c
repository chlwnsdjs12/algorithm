#include <stdio.h>

int main(){
    int a,b,v;
    scanf("%d %d %d", &a, &b, &v);

    int total = (v-a) / (a-b);
    if((v-a) % (a-b) >0){
        total = total + 2;
    }
    else if((v-a) % (a-b) == 0){
        total = total + 1;
    }
    if(a==v){
        total = 1;
    }
    printf("%d", total);
}