#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n+1, 0);        // 인덱싱의 편의를 위해..
    for(int i=1; i<arr.size(); i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }

    vector<int> sum_arr(n+1, 0);
    int sum = 0;
    for(int i=1; i<arr.size(); i++)
    {
        sum = sum + arr[i];
        sum_arr[i] = sum;
    }

    for(int testcase=0; testcase<m; testcase++)
    {
        int i, j;
        cin >> i >> j;
        cout << sum_arr[j] - sum_arr[i-1] << "\n";
    }
}