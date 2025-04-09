#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // 숫자들을 입력받는 배열
    vector<int> arr(n);
    for(int& each : arr)
    {
        cin >> each;
    }

    // 정렬할 배열(복사본)
    vector<int> sorted(n);
    for(int i=0; i<n; i++)
    {
        sorted[i] = arr[i];
    }
    sort(sorted.begin(), sorted.end());

    // 작은 수 순서대로 정렬되었기 때문에 맨 처음이 0
    // 그 다음부터 1씩 증가
    unordered_map<int, int> map;
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(map[sorted[i]] == 0 && sorted[i] != sorted[0])
        {
            count++;
            map[sorted[i]] = count;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << map[arr[i]] << " ";
    }
}