#include <stdio.h>
#include <string.h>

int main(){
    char word[101];
    scanf("%s", word);

    for(int i=0; i<strlen(word); i++){
        if(64<word[i] && word[i]<97){
            word[i] = (int)word[i] + 32;
        }
        else{
            word[i] = (int)word[i] - 32;
        }
    }

    for(int i=0; i<strlen(word); i++){
        printf("%c", (char)word[i]);
    }
}