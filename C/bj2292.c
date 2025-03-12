#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int min=2, max=1;
    if(n==1){
        printf("%d", 1);
    }
    else{
        for(int i=0; i<1000000000; i++){
            min = min + 6*i;
            max = max + 6*(i+1);
            if(min<=n && n<=max){
                printf("%d", i+2);
                break;
            }
        }
    }
}