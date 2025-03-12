#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    unordered_map<int, bool> prime;
    
    prime[1] = false;
    // 모든 수를 소수로 등록
    for(int i=2; i<=1000000; i++)
    {
        prime[i] = true;
    }
    // 각 수에 대해 배수는 소수에서 제외
    for(int i=2; i*i<=1000000; i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=1000000; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    for(int i=m; i<=n; i++)
    {
        if(prime[i])
        {
            cout << i << "\n";
        }
    }
    return 0;
}