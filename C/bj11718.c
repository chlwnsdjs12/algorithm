#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char array[101];

    while(gets(array)){
        if(isblank(array[0])){
            break;
        }
        else if(isblank(array[strlen(array) - 1])){
            break;
        }
        else if(strlen(array) == 0){
            break;
        }
        puts(array);
    }
}