#include <stdio.h>
#include <string.h>

int main(){
    char word[100000];
    int  palin; // 0이면 팰린드롬수가 아니고, 1이면 팰린드롬수이다.
    while(1){
        gets(word);

        if(strcmp(word, "0") == 0){
            break;
        }

        palin = 1;
        if(strlen(word)%2 == 0){
            for(int i=0; i<strlen(word)/2; i++){
                if(word[i] != word[strlen(word)-i-1]){
                    palin = 0;
                    break;
                }
            }
        }

        else if(strlen(word) == 1){
            palin = 1;
        }

        else if(strlen(word) != 1 && strlen(word)%2 == 1){
            for(int i=1; i<((float)strlen(word))/2.0; i++){
                if(word[strlen(word)/2 - i] != word[strlen(word)/2 + i]){
                    palin = 0;
                    break;
                }
            }
        }

        palin == 1 ? printf("yes\n") : printf("no\n");
    }

}