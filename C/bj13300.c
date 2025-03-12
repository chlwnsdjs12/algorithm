#include <stdio.h>

int main(){
    int student[6][2];
    for(int i=0; i<6; i++){
        for(int j=0; j<2; j++){
            student[i][j] = 0;
        }
    }

    int num, max;
    scanf("%d %d", &num, &max);

    int s, grade;
    for(int i=0; i<num; i++){
        scanf("%d %d", &s, &grade);
        student[grade-1][s] += 1;
    }

    int room=0;
    for(int i=0; i<6; i++){
        for(int j=0; j<2; j++){
            if(student[i][j]!=0 && student[i][j]>max && student[i][j]%max>0){
                room = room + (student[i][j]/max + 1);
            }
            else if(student[i][j]!=0 && student[i][j]%max == 0){
                room = room + student[i][j]/max;
            }
            else if(student[i][j] != 0 && student[i][j]<max){
                room = room + 1;
            }
        }
    }

    printf("%d", room);
}