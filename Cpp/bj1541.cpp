#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;
    string num;

    vector<string> arr;
    for(char c : str)
    {
        if(isdigit(c))
        {
            num += c;
        }
        else
        {
            arr.push_back(num);
            arr.push_back(string(1, c));
            num.clear();
        }
    }
    if(!num.empty())
    {
        arr.push_back(num);
    }

    int a = 0;
    vector<int> result;
    for(int i=0; i<arr.size(); i++)
    {
        // 연산자일 때
        if(i % 2 == 1)
        {
            if(arr[i] == "-")
            {
                result.push_back(a);
                a = 0;
            }
        }
        // 숫자일 때
        else
        {
            a += stoi(arr[i]);
            if(i == arr.size() - 1)
            {
                result.push_back(a);
            }
        }
    }
    
    int sum = result[0];
    for(int i=1; i<result.size(); i++)
    {
        sum -= result[i];
    }
    
    cout << sum;
}