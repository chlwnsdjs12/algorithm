#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum = 0;
    cin >> n;

    vector<int> arr(n, 0);
    for(int& each : arr)
    {
        cin >> each;
    }
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        arr[i] = sum;
    }
    
    sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}