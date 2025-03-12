#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> array(n);
    for(int i=0; i<n; i++){
        array[i] = i + 1;
    }

    vector<int> output_array(n);
    int stack = 0, next = -1;
    for(int i=0; i<n; i++){
        while(stack != k){
            next++;
            if(next==n){
                next = 0;
            }
            if(array[next] != 0){
                stack++;
            }
        }
        stack = 0;
        output_array[i] = array[next];
        array[next] = 0;
    }

    cout << "<";
    for(int i=0; i<n; i++){
        if(i < n-1){
            cout << output_array[i] << ", ";
        }
        else if(i == n-1){
            cout << output_array[i];
        }
    }
    cout << ">";
}