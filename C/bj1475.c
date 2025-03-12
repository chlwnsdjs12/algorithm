#include <stdio.h>
#include <string.h>

int main(){
    char room[1000001];
    gets(room);

    int num[10];
    for(int i=0; i<10; i++){
        num[i] = 0;
    }

    for(int i=0; i<strlen(room); i++){
        num[room[i] - '0']++;
    }

    int set = 0;
    if(num[6] == 0 && num[9] == 0){
        for(int i=0; i<10; i++){
            if(num[i] > set){
                set = num[i];
            }
        }
        printf("%d", set);
    }
    else{
        for(int i=0; i<10; i++){
            if(i == 6 || i ==9){
                continue;
            }
            if(num[i] > set){
                set = num[i];
            }
        }
        int set2 = (num[6]+num[9]) % 2 == 0 ? (num[6]+num[9])/2 : (num[6]+num[9])/2+1;
        if(set >= set2){
            printf("%d", set);
        }
        else if(set < set2){
            printf("%d", set2);
        }
    }
}