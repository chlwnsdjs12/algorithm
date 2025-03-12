#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;

    set<int> setted_array;
    for(int i=0; i<test_case; i++){
        int num;
        cin >> num;
        setted_array.insert(num);
    }

    vector<int> array(setted_array.begin(), setted_array.end());

    //sort(array.begin(), array.end());

    for(const int& n : array){
        cout << n << "\n";
    }
}