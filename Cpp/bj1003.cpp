#include <iostream>

using namespace std;

// 알고리즘은 맞으나 시간 초과가 뜸
// 알고리즘 수정 필요

int sumExecute(int sum)
{
    sum++;
    return sum;
}

int fibonacci(int n, int& sum_0, int& sum_1)
{
    if(n == 0)
    {
        sum_0++;
        return 0;
    }
    else if(n == 1)
    {
        sum_1++;
        return 1;
    }
    else
    {
        return fibonacci(n-1, sum_0, sum_1) + fibonacci(n-2, sum_0, sum_1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, sum_0, sum_1;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> n;
        sum_0 = 0, sum_1 = 0;
        fibonacci(n, sum_0, sum_1);
        cout << sum_0 << " " << sum_1 << "\n";
    }
}