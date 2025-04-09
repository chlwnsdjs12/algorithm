#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <unordered_map>

using namespace std;

// start와 end사이를 계속 검사
// start와 end사이에 과일의 종류가 2개 이하면 end++
// 여기서 최대 개수는 저장해놓기
// start와 end사이에 과일의 종류가 3개가 되면 start++

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int max_count;
    if(n==1)
    {
        max_count = 1;
    }
    else
    {
        
        // 입력받은 과일들
        vector<int> arr(n);
        for(int& each : arr)
        {
            cin >> each;
        }

        // 각 종류의 과일의 개수를 카운트하는 배열
        unordered_map<int, int> kind_count;

        max_count = numeric_limits<int>::min();
        int kind = 1;       // 과일 종류의 개수
        int count = 1;      // 과일의 총 개수

        int end = 1;
        kind_count[arr[0]]++;
        for(int i=0; i<n-1; i++)
        {
            if(kind == 3)
            {
                kind_count[arr[i-1]]--;
                if(kind_count[arr[i-1]] == 0)
                {
                    kind--;
                }
                count--;
            }
            while(end < n && kind < 3)
            {
                if(kind_count[arr[end]] != 0)
                {
                    kind_count[arr[end]]++;
                    end++;
                    count++;
                }
                else if(kind_count[arr[end]] == 0)
                {
                    kind_count[arr[end]]++;
                    kind++;
                    end++;
                    count++;
                }
                if(kind == 3)
                {
                    break;
                }
                else
                {
                    max_count = max(count, max_count);
                }
            }
        }
    }

    cout << max_count;
}