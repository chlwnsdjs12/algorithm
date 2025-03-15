#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;

    vector<int> arr(n);
    for(int& each : arr)
    {
        cin >> each;
    }

    for(int i=n-1; i>=0; i--)
    {
        if(k < arr[i])
        {
            continue;
        }
        else
        {
            count += k / arr[i];
            k = k % arr[i];
        }
    }

    cout << count;
}