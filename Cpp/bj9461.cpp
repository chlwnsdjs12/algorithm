#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, testcase;
    cin >> testcase;
    
    // 테스트할 수를 받는 배열
    vector<int> testcase_arr(testcase);
    int max = 0;        // 가장 큰 수
    for(int& each : testcase_arr)
    {
        cin >> each;
        if(each > max)
        {
            max = each;
        }
    }

    // 가장 큰 수 만큼 dp를 한 번 만 하면 됨
    vector<long long> arr(max+1);
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        arr[3] = 1;
        arr[4] = 2;
        arr[5] = 2;
    for(int i=6; i<arr.size(); i++)
    {
        arr[i] = arr[i-1] + arr[i-5];
    }

    // 출력
    for(int t=0; t<testcase; t++)
    {
        cout << arr[testcase_arr[t]] << "\n";
    }
}