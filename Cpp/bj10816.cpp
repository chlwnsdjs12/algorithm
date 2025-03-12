#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    unordered_map<string, int> arr;

    string have_num;
    for(int i=0; i<n; i++)
    {
        cin >> have_num;
        // map에 key가 있을때
        if(arr[have_num] != 0)
        {
            arr[have_num]++;
        }
        // map에 key가 없을때
        else
        {
            arr[have_num] = 1;
        }
    }

    cin >> m;
    string wanted_num;
    for(int i=0; i<m; i++)
    {
        cin >> wanted_num;
        int value = (arr[wanted_num] != 0) ? arr[wanted_num] : 0;
        cout << value << " ";
    }
}