#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(const vector<int>& input_arr, int target)
{
    int start = 0;
    int end = input_arr.size() - 1;
    int mid;

    // 맨 왼쪽 값이 타겟일 경우
    if(input_arr[0] == target)
    {
        return start;
    }
    else
    {
        while (start + 1 < end)
        {
            mid = (start + end) / 2;

            if (input_arr[mid] < target)
            {
                start = mid;
            }
            else
            {
                end = mid;
            }
        }
    // 인덱스값을 리턴
    return end;    
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;

    cin >> n;
    vector<int> arr1(n, 0);
    for(int& each : arr1)
    {
        cin >> each;
    }
    sort(arr1.begin(), arr1.end());

    cin >> m;
    vector<int> arr2(m, 0);
    for(int& each : arr2)
    {
        cin >> each;
    }

    for(int& each : arr2)
    {
        if(arr1[binary_search(arr1, each)] == each)
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
}