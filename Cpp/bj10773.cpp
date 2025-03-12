#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, input_num, sum = 0;
    cin >> k;
    deque<int> arr;

    for(int i=0; i<k; i++)
    {
        cin >> input_num;
        if(input_num == 0)
        {
            arr.pop_back();
        }
        else
        {
            arr.push_back(input_num);
        }
    }
    for(int& each : arr)
    {
        sum += each;
    }
    cout << sum;
}