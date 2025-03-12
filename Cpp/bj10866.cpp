#include <iostream>
#include <vector>
#include <string>

using namespace std;

void push_front(vector<int>& a, int x){
    a.insert(a.begin(), x);
}

void push_back(vector<int>& a, int x){
    a.push_back(x);
}

int pop_front(vector<int>& a){
    if(a.empty()){
        return -1;
    }
    else{
        int num = a.front();
        a.erase(a.begin());
        return num;
    }
}

int pop_back(vector<int>& a){
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

    vector<int> deque;
    string oper;
    int value;
    for(int i=0; i<test_case; i++){
        cin >> oper;
        if(oper == "push_front"){
            cin >> value;
            push_front(deque, value);
        }
        else if(oper == "push_back"){
            cin >> value;
            push_back(deque, value);
        }
        else if(oper == "pop_front"){
            cout << pop_front(deque) << "\n";
        }
        else if(oper == "pop_back"){
            cout << pop_back(deque) << "\n";
        }
        else if(oper == "size"){
            cout << size(deque) << "\n";
        }
        else if(oper == "empty"){
            cout << empty(deque) << "\n";
        }
        else if(oper == "front"){
            cout << front(deque) << "\n";
        }
        else if(oper == "back"){
            cout << back(deque) << "\n";
        }
    }
}