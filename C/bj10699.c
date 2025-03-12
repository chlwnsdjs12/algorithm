#include <stdio.h>
#include <time.h>

int main(){
    struct tm *t;
    time_t now;
    
    time(&now);
    t = localtime(&now);
    
    int year = t->tm_year + 1900;
    int month = t->tm_mon + 1;
    int day = t->tm_mday;
    
    printf("%d-%d-%d", year, month, day);
    
    return 0;
}