#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    string name;
    cin >> n >> m;

    unordered_map<string, string> arr;

    for(int i=1; i<=n; i++)
    {
        cin >> name;
        // 포켓몬-번호, 번호-포켓몬 둘다 등록
        arr[name] = to_string(i);
        arr[to_string(i)] = name;
    }

    vector<string> result;

    for(int i=0; i<m; i++)
    {
        string want;
        cin >> want;
        result.push_back(arr[want]);
    }

    for(string& each : result)
    {
        cout << each << "\n";
    }
}