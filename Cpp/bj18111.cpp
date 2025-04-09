#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, blocks;
    cin >> n >> m >> blocks;
    int min_height = numeric_limits<int>::max();    // 가장 낮은 높이
    int max_height = numeric_limits<int>::min();    // 가장 높은 높이
    int min_time = numeric_limits<int>::max();      // 최소 시간
    int goal_height;                                // 목표 높이

    vector<int> arr(n*m);
    for(int i=0; i<n*m; i++)
    {
        cin >> arr[i];
        min_height = min(arr[i], min_height);
        max_height = max(arr[i], max_height);
    }

    for(int i=min_height; i<=max_height; i++)        // 목표 높이를 찾는 반복문
    {
        int time = 0;
        int inven = blocks;
        for(int j=0; j<arr.size(); j++)     // 각 칸마다 목표와 비교
        {
            // 해당 칸이 목표보다 높으므로 블록 제거
            if(arr[j] > i)
            {
                inven += arr[j] - i;
                time = time + 2 * (arr[j] - i);
            }
            // 해당 칸이 목표보다 낮으므로 블록 추가
            if(arr[j] < i)
            {
                inven -= i - arr[j];
                time = time + 1 * (i - arr[j]);
            }
        }
        if(inven >= 0)
        {
            // 이때까지 구한 목표 높이에 대한 최소 시간 >= 지금 목표 높이에 대해 걸린 시간
            if(min_time >= time)
            {
                goal_height = i;
                min_time = time;
            }
        }
    }

    cout << min_time << " " << goal_height;
}