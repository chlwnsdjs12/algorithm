#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;

    vector<vector<int>> w_h(test_case, vector<int>(2));
    for(int i=0; i<test_case; i++){
        for(int j=0; j<2; j++){ 
            cin >> w_h[i][j];
        }
    }

    vector<int> rank(test_case);
    for(int i=0; i<test_case; i++){
        rank[i] = 1;
    }

    for(int i=0; i<test_case; i++){
        for(int j=0; j<test_case; j++){
            if(i != j){
                if(w_h[i][0] < w_h[j][0] && w_h[i][1] < w_h[j][1]){
                    rank[i]++;    
                }
            }
        }
    }

    for(int i=0; i<test_case; i++){
        cout << rank[i] << " ";
    }
}