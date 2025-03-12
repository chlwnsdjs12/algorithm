#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int binarySearch(const vector<long>& arr, long a, long want)
{
    long low = 1, high = a+1, count;
    long mid;
    
    while(low < high)
    {
        count = 0;
        mid = (low + high)/2;
        for(const long& each : arr)
        {
            count += (each / mid);
        }
        // 잘라낸 개수가 원하는 개수보다 작으면 길이가 길다는 것
        if(count < want)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return (low - 1 == a) ? a : low - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int have, want, big = numeric_limits<int>::min();
    cin >> have >> want;

    vector<long> arr(have, 0);
    for(long& each : arr)
    {
        cin >> each;
        if(big < each)
        {
            big = each;
        }
    }
    cout << binarySearch(arr, big, want);
}