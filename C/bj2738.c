#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    int b[n][m];
    int num;
    int sum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &num);
            a[i][j] = num;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &num);
            b[i][j] = num;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum = a[i][j] + b[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }
}