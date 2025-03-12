#include <stdio.h>
#include <string.h>

int main(){
    int size;
    scanf("%d", &size);

    int array[size];
    for(int i=0; i<size; i++){
        scanf("%d", &array[i]);
    }

    int want_sum;
    scanf("%d", &want_sum);

    int want_array[want_sum];
    for(int i=0; i<want_sum; i++){
        want_array[i] = 0;
    }

    int result = 0;

    for(int i=0; i<size; i++){
        if(array[i] >= want_sum){
            continue;
        }
        else{
            want_array[array[i]] = array[i];
        }
    }

    for(int i=1; (float)i<((float)(want_sum)/2.0); i++){
        if(want_array[i] + want_array[want_sum - i] == want_sum 
        && want_array[i] != want_array[want_sum - i]){
            result++;
        }
    }
    printf("%d", result);
}