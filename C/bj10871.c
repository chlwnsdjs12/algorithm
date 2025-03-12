#include <stdio.h>

int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    int array[n];
    int a;
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        array[i] = a;
    }
    for(int j = 0; j<n; j++){
        if(array[j] < x){
            printf("%d ", array[j]);
        }
    }
}