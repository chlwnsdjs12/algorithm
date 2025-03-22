#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase, n;
    cin >> testcase;
    for(int t=0; t<testcase; t++)
    {
        cin >> n;

        vector<int> sum(n+1);
        sum[0] = 0;
        sum[1] = 1;
        sum[2] = 2;
        sum[3] = 4;

        // n번째에 도달할려면
        // n-1번째에서 +1
        // n-2번째에서 +2
        // n-3번째에서 +3
        for(int i=4; i<sum.size(); i++)
        {
            sum[i] = sum[i-3] + sum[i-2] + sum[i-1];
        }

        cout << sum[n] << "\n";
    }
}