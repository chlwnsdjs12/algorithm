#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // n번째 도달을 위해서는
    // n-1에서 l 하나 추가
    // n-2에서 =, ㅁ 하나 추가
    vector<int> sum(n+1);
    sum[0] = 0;
    sum[1] = 1;
    sum[2] = 3;
    for(int i=3; i<sum.size(); i++)
    {
        sum[i] = (sum[i-1] + (sum[i-2] * 2)) % 10007;
    }
    cout << sum[n];
}