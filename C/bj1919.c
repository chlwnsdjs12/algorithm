#include <stdio.h>
#include <string.h>

int main(){
    char word1[1001];
    char word2[1001];
    gets(word1);
    gets(word2);

    int word1_apb[26];
    int word2_apb[26];

    for(int i=0; i<26; i++){
        word1_apb[i] = 0;
        word2_apb[i] = 0;
    }
    
    for(int i=0; i<strlen(word1); i++){
        for(int j=0; j<26; j++){
            int ascii = 97;
            if(word1[i] == ascii + j){
                word1_apb[j] += 1;
                break;
            }
        }
    }

      for(int i=0; i<strlen(word2); i++){
        for(int j=0; j<26; j++){
            int ascii = 97;
            if(word2[i] == ascii + j){
                word2_apb[j] += 1;
                break;
            }
        }
    }

    int result = 0;
    for(int i=0; i<26; i++){
        if(word1_apb[i] > word2_apb[i]){
            result += word1_apb[i] - word2_apb[i];
        }
        if(word1_apb[i] < word2_apb[i]){
            result += word2_apb[i] - word1_apb[i];
        }
    }

    printf("%d", result);
}