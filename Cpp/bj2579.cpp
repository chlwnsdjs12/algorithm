#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // n = 계단 수
    int n;
    cin >> n;

    vector<int> stairs(n);
    for(int& each : stairs)
    {
        cin >> each;
    }

    vector<int> sum(n);
    sum[0] = stairs[0];
    sum[1] = stairs[0] + stairs[1];
    sum[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2]);

    for(int i=3; i<stairs.size(); i++)
    {
        sum[i] = max(sum[i-2] + stairs[i], sum[i-3] + stairs[i-1] + stairs[i]);
    }
    cout << sum[n-1];
}