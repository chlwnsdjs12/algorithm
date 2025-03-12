#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <set>

using namespace std;

// 산술평균 구하기
double get_arithmetic_mean(vector<int>& input_arr)
{
    int sum = 0;
    for(int& each : input_arr)
    {
        sum += each;
    }
    double mean = static_cast<double>(sum) / input_arr.size();

    if(round(mean) == -0.0)
    {
        return 0.0;
    }

    return round(mean);
}

// 중앙값 구하기
int get_median(vector<int>& input_arr)
{
    int mid = (input_arr.size() - 1) / 2;
    return input_arr[mid];
}

// 최빈값 구하기
int get_mode(vector<int>& input_arr)
{
    int max = 0, want = 0, mode = 0;
    unordered_map<int, int> mode_arr;

    // 각 숫자의 빈도수 기록
    for(int& each : input_arr)
    {
        mode_arr[each]++;
    }

    // 중복을 제거
    set<int> unique_arr(input_arr.begin(), input_arr.end());

    // 빈도가 가장 큰 값 찾기
    for(const int& each : unique_arr)
    {
        if(max < mode_arr[each])
        {
            max = mode_arr[each];
        }
    }

    for(const int& each : unique_arr)
    {
        // 최빈값이 겹치지 않는 경우
        if(mode_arr[each] == max && want == 0)
        {
            mode = each;
            // 최빈값이 겹칠 경우를 대비
            want = 1;
        }
        // 최빈값이 겹치면 두 번째로 작은 값을 출력
        else if(mode_arr[each] == max && want == 1)
        {
            mode = each;
            break;
        }
    }
    return mode;
}

// 범위 구하기
int get_range(const vector<int>& input_arr)
{
    return input_arr[input_arr.size()-1] - input_arr[0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int& each : arr)
    {
        cin >> each;
    }
    sort(arr.begin(), arr.end());

    cout << get_arithmetic_mean(arr) << "\n";
    cout << get_median(arr) << "\n";
    cout << get_mode(arr) << "\n";
    cout << get_range(arr) << "\n";
}