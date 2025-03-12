#include <iostream>
#include <vector>
#include <string>

using namespace std;

void push(vector<int>& a, int x){
    a.push_back(x);
}

int pop(vector<int>& a){
    if(a.empty()){
        return -1;
    }
    else{
        int num = a.front();
        a.erase(a.begin());
        return num;
    }
}

int size(vector<int>& a){
    return a.size();
}

bool empty(vector<int>& a){
    if(a.empty()){
        return true;
    }
    else{
        return false;
    }
}

int front(vector<int>& a){
    if(a.empty()){
        return -1;
    }
    else{
        return a.front();
    }
}

int back(vector<int>& a){
    if(a.empty()){
        return -1;
    }
    else{
        return a.back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;

    vector<int> que;
    int value;
    string oper;
    for(int i=0; i<test_case; i++){
        cin >> oper;
        if(oper == "push"){
            cin >> value;
            push(que, value);
        }
        else if(oper == "pop"){
            cout << pop(que) << "\n";
        }
        else if(oper == "size"){
            cout << size(que) << "\n";
        }
        else if(oper == "empty"){
            cout << empty(que) << "\n";
        }
        else if(oper == "front"){
            cout << front(que) << "\n";
        }
        else if(oper == "back"){
            cout << back(que) << "\n";
        }
    }
}