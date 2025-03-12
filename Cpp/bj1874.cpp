#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, index = 0;
    cin >> n;
    stack<int> arr;
    vector<int> wanted_arr(n);
    vector<char> result;

    for(int& each : wanted_arr)
    {
        cin >> each;
    }

    int i=1;
    while(index < n)
    {
        if(arr.empty() || arr.top() != wanted_arr[index])
        {
            if(i>n)
            {
                cout << "NO";
                return 0;
            }
            arr.push(i);
            result.push_back('+');
            i++;
        }
        else
        {
            arr.pop();
            index++;
            result.push_back('-');
        }
    }
    for(char& each : result)
    {
        cout << each << "\n";
    }
}