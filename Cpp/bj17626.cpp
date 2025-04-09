#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// n번째에 도달하기 위해 
// min(arr[n-1] + sum[arr[n-1]], arr[n-2] + sum[arr[n-2]])

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // n의 최대값이 50,000이므로
    // 223^2이 n이 가질 수 있는 최대의 제곱수
    vector<int> arr(224, 0);
    // 223까지의 모든 제곱수를 계산해 배열에 미리 저장
    for(int i=1; i<arr.size(); i++)
    {
        arr[i] = i*i;
    }

    // arr[i]에 도달하기 위한 수들의 개수
    vector<int> sum(n+1, 0);
    for(int i=1; i<sum.size(); i++)
    {
        int min = 50000;
        int k = 1;
        int j = 1;
        while(i >= j)
        {
            if(i == j)
            {
                min = 1;
                break;
            }
            else
            {
                sum[i] = sum[j] + sum[i-j];
                if(min > sum[i])
                {
                    min = sum[i];
                }
            }
            k++;
            j = k*k;
        }
        sum[i] = min;
    }

    cout << sum[n];
}