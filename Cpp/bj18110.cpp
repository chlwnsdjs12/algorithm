#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double exclude, sum = 0, avg;
    cin >> n;

    if(n == 0)
    {
        cout << "0";
        return 0;
    }
    
    deque<double> arr(n, 0);
    for(double& each : arr)
    {
        cin >> each;
    }
    sort(arr.begin(), arr.end());

    // 절사평균을 구하기 위해 상위15%, 하위15% 값 삭제
    exclude = round(static_cast<double>(arr.size()) * 15 / 100);
    for(int i=0; i<exclude; i++)
    {
        arr.pop_front();
        arr.pop_back();
    }

    for(double& each : arr)
    {
        sum += each;
    }
    avg = round(sum / arr.size());
    cout << static_cast<int>(avg);
}