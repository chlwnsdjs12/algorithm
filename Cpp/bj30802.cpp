#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, S, M, L, XL, XXL, XXXL, T, P;
    int T_count = 0;
    cin >> n;

    vector<int> arr(6, 0);
    //for(int& each : arr){
    //  cin >> each;
    //}
    for(int i=0; i<6; i++){
        cin >> arr[i];
    }

    cin >> T >> P;

    for(int i = 0; i<6; i++){
        int x = arr[i] / T;
        // 삼항 연산자( if-else 두개의 케이스 + 단순 계산 일때 )
        // T_count = ( arr[i] % T !=0 ) ? T_count + x + 1 : T_count + x;
        if(arr[i] % T != 0){
            T_count += x + 1;
        }
        else{
            T_count += x;
        }
    }

    cout << T_count << "\n" << n / P << " "<< n % P;
}