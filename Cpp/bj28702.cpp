#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string result;

    vector<string> arr(3, "");
    for(string& each : arr)
    {
        cin >> each;
    }

    for(int i=0; i<3; i++)
    {
        if(arr[i] != "Fizz" && arr[i] !="Buzz" && arr[i] !="FizzBuzz")
        {
            int x = stoi(arr[i]);
            int j = x + 3 - i;
            if((j % 3 == 0) && (j % 5 != 0))
            {
                cout << "Fizz";
                break;
            }
            else if((j % 3 != 0) && (j % 5 == 0))
            {
                cout << "Buzz";
                break;
            }
            else if((j % 3 == 0) && (j % 5 == 0))
            {
                cout << "FizzBuzz";
                break;
            }
            else
            {
                result = to_string(j);
                cout << result;
                break;
            }
        }
    }
}