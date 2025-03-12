#include <stdio.h>
#include <string.h>

int main(){
    char str1[1001];
    char str2[1001];
    int test_case;
    scanf("%d", &test_case);

    int apb1[26];
    int apb2[26];
    for(int num=0; num<test_case; num++){
        scanf("%s", &str1);
        scanf("%s", &str2);
        for(int i=0; i<26; i++){
            apb1[i] = 0;
            apb2[i] = 0;
        }

        for(int i=0; i<strlen(str1); i++){
            for(int j=0; j<26; j++){
                int ascii = 97;
                if(str1[i] == 97+j){
                    apb1[j]++;
                }
            }
        }

        for(int i=0; i<strlen(str2); i++){
            for(int j=0; j<26; j++){
                int ascii = 97;
                if(str2[i] == 97+j){
                    apb2[j]++;
                }
            }
        }

        int print;
        if(strlen(str1) == strlen(str2)){
            for(int i=0; i<26; i++){
                if(apb1[i] != apb2[i]){
                    print = 0;
                    break;
                }
                else{
                    print = 1;
                }
            }
            if(print == 0){
                printf("Impossible\n");
            }
            else if(print == 1){
                printf("Possible\n");
            }
        }
        else if(strlen(str1) != strlen(str2)){
            printf("Impossible\n");
        }
    }
}