#include <stdio.h>

int main(){
    int i;
    char word[1001];
    gets(word);
    scanf("%d", &i);

    printf("%c", word[i-1]);
}