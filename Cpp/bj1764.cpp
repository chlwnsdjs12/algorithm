#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, count = 0;
    cin >> n >> m;
    
    unordered_map<string, int> arr;
    vector<string> result;
    for(int i=0; i<n+m; i++)
    {
        string name;
        cin >> name;
        
        if(arr[name] < 2)
        {
            arr[name]++;
        }
        if(arr[name] == 2)
        {
            result.push_back(name);
            count++;
        }
    }

    // 사전순으로 정렬
    sort(result.begin(), result.end());

    cout << count << "\n";
    for(string& each : result)
    {
        cout << each << "\n";
    }
}