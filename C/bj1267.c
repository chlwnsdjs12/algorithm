#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int M = 0, Y = 0;
    int time[n];

    for(int i=0; i<n; i++){
        scanf("%d", &time[i]);
        if(time[i]%30 < 30){
            Y = Y + (time[i]/30 + 1)*10;
        }
        if(time[i]%60 < 60){
            M = M + (time[i]/60 + 1)*15;
        }
    }
    if(M<Y){
        printf("M %d", M);
    }
    else if(M>Y){
        printf("Y %d", Y);
    }
    else{
        printf("Y M %d", Y);
    }
}