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
        int num = a.back();
        a.pop_back();
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

int top(vector<int>& a){
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

    string oper;
    int value;
    vector<int> stack;
    for(int i=0; i<test_case; i++){
        cin >> oper;
        if(oper == "push"){
            cin >> value;
            push(stack, value);
        }
        else if(oper == "pop"){
            cout << pop(stack) << "\n";
        }
        else if(oper == "size"){
            cout << size(stack) << "\n";
        }
        else if(oper == "empty"){
            cout << empty(stack) << "\n";
        }
        else if(oper == "top"){
            cout << top(stack) << "\n";
        }
    }
}