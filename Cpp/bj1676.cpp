#include <iostream>
#include <math.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int two = 0, five = 0, devide;
    for(int i=1; i<n+1; i++){
        devide = i;
        while(devide%2 == 0){
            devide = devide/2;
            two++;
        }
        while(devide%5 == 0){
            devide = devide/5;
            five++;
        }
    }

    if(two > five){
        cout << five;
    }
    else if(two < five){
        cout << two;
    }
    else{
        cout << five;
    }
}