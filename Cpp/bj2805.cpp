#include <iostream>
#include <vector>

using namespace std;

long binarySearch(const vector<long>& arr, long big, long want)
{
    long low = 1, high = big;
    long mid;
    
    while(low < high)
    {
        mid = (low + high)/2;
        long sum = 0;
        for(const int& each : arr)
        {
            if(each > mid)
            {
                sum = sum + each - mid;
            }
        }
        // 잘라내어 합친 길이가 원하는 길이보다 작으면 더 잘라야한다는 것
        if(sum < want)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return (low + 1 == high) ? high : low - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long n, m;
    cin >> n >> m;

    vector<long> tree(n);
    long big = -1;
    for(long& each : tree)
    {
        cin >> each;
        if(each > big)
        {
            big = each;
        }
    }

    cout << binarySearch(tree, big, m);
}