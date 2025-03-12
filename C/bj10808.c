#include <stdio.h>
#include <string.h>

int main(){
    char word[102];
    gets(word);
    int length = strlen(word);
    int alphabet[26];
    for(int i=0; i<26; i++){
        alphabet[i] = 0;
    }

    for(int i=0; i<length; i++){
        for(int j=0; j<26; j++){
            int ascii = 97;
            if(word[i] == ascii + j){
                alphabet[j] += 1;
                break;
            }
        }
    }

    for(int i=0; i<26; i++){
        printf("%d ", alphabet[i]);
    }
}