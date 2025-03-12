#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, value;
    cin >> m;

    unordered_map<int, int> arr;

    for(int i=0; i<m; i++)
    {
        string execute;
        cin >> execute;

        if(execute == "add")
        {
            cin >> value;
            arr[value] = 1;
        }
        else if(execute == "remove")
        {
            cin >> value;
            arr[value] = 0;
        }
        else if(execute == "check")
        {
            cin >> value;
            if(arr[value] == 0)
            {
                cout << "0\n";
            }
            else
            {
                cout << "1\n";
            }
        }
        else if(execute == "toggle")
        {
            cin >> value;
            arr[value] = (arr[value] == 0) ? 1 : 0;
        }
        else if(execute == "all")
        {
            for(int j=1; j<21; j++)
            {
                arr[j] = 1;
            }
        }
        else if(execute == "empty")
        {
            for(int j=1; j<21; j++)
            {
                arr[j] = 0;
            }
        }
    }
}