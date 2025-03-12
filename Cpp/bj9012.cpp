#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> stringToChar(const string& str)
{
    vector<char> vec;
    for(char c : str)
    {
        vec.push_back(c);
    }
    return vec;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        string input;
        cin >> input;
        vector<char> arr = stringToChar(input);
        int sum = 0;
        for(char& each : arr)
        {
            if(sum == 0 && each == ')')
            {
                sum = -1;
                break;
            }
            else if(sum != 0 && each == ')')
            {
                sum--;
            }
            else
            {
                sum++;
            }
        }
        if(sum == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}