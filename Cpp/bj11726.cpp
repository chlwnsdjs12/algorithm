#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> sum(n+1);
    sum[0] = 0;
    sum[1] = 1;
    sum[2] = 2;
    for(int i=3; i<sum.size(); i++)
    {
        sum[i] = (sum[i-2] + sum[i-1]) % 10007;
    }
    cout << sum[n];
}