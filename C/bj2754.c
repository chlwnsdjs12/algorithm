#include <stdio.h>
#include <string.h>

int main(){
    char get_score[3];
    scanf("%s", get_score);

    char str_score[][3] = {"A+", "A0", "A-", "B+", "B0", "B-",
                    "C+", "C0", "C-", "D+", "D0", "D-", "F"};
    float float_score[] = {4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 
                    1.7, 1.3, 1.0, 0.7, 0.0};

    for(int i=0; i<(sizeof(str_score) / sizeof(str_score[0])); i++){
        if(strcmp(str_score[i], get_score) == 0){
            printf("%.1f", float_score[i]);
            break;
        }
    }
}