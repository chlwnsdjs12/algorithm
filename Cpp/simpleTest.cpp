#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr(5);

    for(int& each : arr)
    {
        cin >> each;
    }
    set<int> unique(arr.begin(), arr.end());
    for(const int& each : unique)
    {
        cout << each << "\n";
    }
    cout << unique.size();
}