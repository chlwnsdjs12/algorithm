#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a, b, c, d, e, f, g;
    int exist = 0;
    for(int i=1; i<n+1; i++){
        a = i%10;                   //1의 자리
        b = i/10%10;                //10의 자리
        c = i/100%10;               //100의 자리
        d = i/1000%10;              //1000의 자리
        e = i/10000%10;             //10000의 자리
        f = i/100000%10;            //100000의 자리
        g = i/1000000%10;           //1000000의 자리

        if(a+b+c+d+e+f+g + (a+b*10+c*100+d*1000+e*10000+f*100000+g*1000000) == n){
            printf("%d", (a+b*10+c*100+d*1000+e*10000+f*100000+g*1000000));
            exist = 1;
            break;
        }
    }
    if(exist == 0){
        printf("0");
    }
}