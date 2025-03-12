#include <stdio.h>
#include <string.h>

int main(){
    int test_case;
    scanf("%d", &test_case);
    
    char array[1000];

    for(int i=0; i<test_case; i++){
        scanf("%s", array);
        int length = strlen(array);
        printf("%c%c\n", array[0], array[length-1]);        
    }
}