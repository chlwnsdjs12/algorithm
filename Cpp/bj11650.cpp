#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b){
    if(a.first == b.first){
        return a < b;
    }
    else{
        return a.first < b.first;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;

    vector<pair<int, int>> locate(test_case);
    for(int i=0; i<test_case; i++){
        cin >> locate[i].first >> locate[i].second;
    }

    stable_sort(locate.begin(), locate.end(), compare);

    for(int i=0; i<test_case; i++){
        cout << locate[i].first << " " << locate[i].second << "\n";
    }
}