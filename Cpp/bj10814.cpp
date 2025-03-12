#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b){
    if(a.first == b.first){
        return false;
    }
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;

    vector<pair<int, string>> member(test_case);
    for(int i=0; i<test_case; i++){
        cin >> member[i].first >> member[i].second;
    }

    stable_sort(member.begin(), member.end(), compare);

    for(int i=0; i<test_case; i++){
        cout << member[i].first << " " << member[i].second << "\n";
    }
}