#include <stdio.h>

int main(){
    int card[100];  //카드 숫자
    int n;          //카드 개수
    int want;        //목표 합
    scanf("%d %d", &n, &want);
    for(int i=0; i<n; i++){
        scanf("%d", &card[i]);
    }

    int max=0;
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(card[i]+card[j]+card[k] > max && card[i]+card[j]+card[k] <= want){
                    max = card[i]+card[j]+card[k];
                }
            }
        }
    }

    printf("%d", max);
}