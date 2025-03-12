#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    // 입력받은 크기가 [n][m]인 board
    vector<vector<char>> board(n, vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char c;
            cin >> c;
            board[i][j] = c;
        }
    }

    // [0][0]이 W로 시작하는 Wboard 생성
    vector<vector<char>> corrected_Wboard(n, vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((i + j) % 2 == 0){
                corrected_Wboard[i][j] = 'W';
            }
            else{
                corrected_Wboard[i][j] = 'B';
            }
        }
    }

    // [0][0]이 B으로 시작하는 Bboard 생성
    vector<vector<char>> corrected_Bboard(n, vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((i + j) % 2 == 0){
                corrected_Bboard[i][j] = 'B';
            }
            else{
                corrected_Bboard[i][j] = 'W';
            }
        }
    }

    int count, Wcount, Bcount, min_count = 33;
    int min_low = 0, max_low = 8;
    int min_col = 0, max_col = 8;
    while(1){
        Wcount = 0;
        Bcount = 0;
        for(int i=0; i<n; i++){
            if(min_low <= i && i < max_low){    // 행이 8번만 수행되게 제한
                for(int j=0; j<m; j++){
                    if(min_col <= j && j < max_col){    // 열이 8번만 수행되게 제한
                        if(board[i][j] != corrected_Wboard[i][j]){
                            Wcount++;
                        }
                        if(board[i][j] != corrected_Bboard[i][j]){
                            Bcount++;
                        }
                    }
                }
            }
        }

        if(Wcount <= Bcount){                //B보드보다 W보드에서 오류가 더 적을 경우
            count = Wcount;
        }
        else if(Wcount > Bcount){          //W보드보다 B보드`에서 오류가 더 적을 경우
            count = Bcount;
        }
        if(count < min_count){              //작은값 반환
            min_count = count;
        }
        if(max_low == n && max_col == m){   //행, 열의 최대가 n, m이랑 같아지면 break;
            break;
        }
        if(max_col < m && max_low == n){    //행이 마지막에 도착하면 열을 +1
            min_col++;
            max_col++;
            min_low = 0;
            max_low = 8;
        }
        else if(max_low < n){               //행이 n보다 작을 때 행 + 1
            min_low++; 
            max_low++;
        }
    }

    cout << min_count << "\n";
}