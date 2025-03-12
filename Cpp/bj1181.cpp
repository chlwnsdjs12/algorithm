#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool compare(const string& a, const string& b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }
    else{
        return a < b;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;

    set<string> setted_word;
    for(int i=0; i<test_case; i++){
        string word;
        cin >> word;
        setted_word.insert(word);
    }

    vector<string> word(setted_word.begin(), setted_word.end());

    sort(word.begin(), word.end(), compare);

    for(const string& w : word){
        cout << w << "\n";
    }
}