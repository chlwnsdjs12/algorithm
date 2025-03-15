#include <iostream>
#include <vector>

using namespace std;

// 알고리즘은 맞으나 시간 초과가 뜸
// 알고리즘 수정 필요

struct Fibo
{
    vector<int> sum_0;
    vector<int> sum_1;

    void print(int n)
    {
        cout << sum_0[n] << " " << sum_1[n] << "\n";
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Fibo fibo;
    int t, n;
    cin >> t;

    vector<int> fibo_arr(41);
    
    fibo_arr[0] = 0;
    fibo_arr[1] = 1;
    fibo.sum_0.push_back(1);
    fibo.sum_1.push_back(0);
    fibo.sum_0.push_back(0);
    fibo.sum_1.push_back(1);

    for(int i=2; i<=40; i++)
    {
        fibo_arr[i] = fibo_arr[i-1] + fibo_arr[i-2];
        fibo.sum_0.push_back(fibo.sum_0[i-1] + fibo.sum_0[i-2]);
        fibo.sum_1.push_back(fibo.sum_1[i-1] + fibo.sum_1[i-2]);
    }

    for(int i=0; i<t; i++)
    {
        cin >> n;
        fibo.print(n);       
    }
}