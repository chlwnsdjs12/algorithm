#include <iostream>
#include <deque>
#include <vector>
#include <string>

using namespace std;

int fibonacci(int n)
{
    if(n == 0)
    {
        sum_0++;
        cout << sum_0 << "\n";
    }
    else if (n == 1)
    {
        sum_1++;
        cout << sum_1 << "\n";
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

    int n;
    cin >> n;
    
    fibonacci(n, 0, 0);
}