#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int number[10001];
    for(int i=0; i<10001; i++){
        number[i] = 0;
    }

    int x;
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        number[x]++;
    }

    for(int i=1; i<10001; i++){
        for(int j=0; j<number[i]; j++){
            if(number[i] != 0){
                printf("%d\n", i);
            }
        }
    }
}