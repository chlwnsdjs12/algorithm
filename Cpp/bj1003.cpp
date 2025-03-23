#include <iostream>
#include <vector>

using namespace std;

// 알고리즘은 맞으나 시간 초과가 뜸
// 알고리즘 수정 필요

struct Fibo
{
    int sum_0, sum_1;

    void print()
    {
        cout << sum_0 << " " << sum_1 << "\n";
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Fibo fibo;
    int t, n;
    cin >> t;

    vector<Fibo> fibo_arr(41);
    
    fibo_arr[0].sum_0 = 1;
    fibo_arr[0].sum_1 = 0;
    fibo_arr[1].sum_0 = 0;
    fibo_arr[1].sum_1 = 1;

    for(int i=2; i<=40; i++)
    {
        fibo_arr[i].sum_0 = fibo_arr[i-1].sum_0 + fibo_arr[i-2].sum_0;
        fibo_arr[i].sum_1 = fibo_arr[i-1].sum_1 + fibo_arr[i-2].sum_1;
    }

    for(int i=0; i<t; i++)
    {
        cin >> n;
        fibo_arr[n].print();
    }
}