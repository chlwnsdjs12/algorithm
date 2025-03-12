#include <stdio.h>
//카드 뒤집기
int main(){
    int before_card[20];
    int after_card[20];

    for(int i=0; i<20; i++){
        before_card[i] = i+1;
        after_card[i] = i+1;
    }

    int start, end;
    for(int i=0; i<10; i++){
        scanf("%d %d", &start, &end);
        int end_target = end-1;
        for(int j=start-1; j<end; j++){
            after_card[j] = before_card[end_target];
            end_target--;
        }
        for(int j=0; j<20; j++){
            before_card[j] = after_card[j];
        }
    }

    for(int i=0; i<20; i++){
        printf("%d ", before_card[i]);
    }
}