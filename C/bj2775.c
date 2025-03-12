#include <stdio.h>

int main(){
    int house[15][15];
    int person;

    for(int i=0; i<15; i++){
        for(int j=0; j<15; j++){
            if(i == 0){
                house[i][j] = j;
            }
            else{
                house[i][j] = 0;
            }
        }
    }
    int test_case;
    scanf("%d", &test_case);
    
    for(int tc=0; tc<test_case; tc++){
        int floor, place;
        scanf("%d\n%d", &floor, &place);

        int stop = 0;
        for(int i=1; i<15; i++){
            for(int j=1; j<15; j++){
                house[i][j] = house[i][j-1] + house[i-1][j];
                if(i == floor && j == place){
                    person = house[i][j];
                    stop = 1;
                    break;
                }
            }
            if(stop == 1){
                break;
            }
        }

        printf("%d\n", person);
    }
}