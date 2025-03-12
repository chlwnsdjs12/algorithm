#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int num6_stack;
    int stack = 0;
    int num = 665;
    while(stack != n){
        num++;
        int loop_num = num;
        num6_stack = 0;
        while(1){
            if(loop_num % 10 == 6){
                num6_stack++;
                loop_num = loop_num / 10;
            }
            else if(loop_num % 10 != 6){
                num6_stack = 0;
                loop_num = loop_num / 10;
            }
            if(num6_stack == 3){
                stack++;
                break;
            }
            if(loop_num == 0){
                break;
            }
        }
    }
    
    cout << num << "\n";
}