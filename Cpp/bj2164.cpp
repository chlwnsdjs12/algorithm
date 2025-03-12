#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    deque<int> arr;
    for(int i=0; i<n; i++)
    {
        arr.push_back(i+1);
    }

    while(arr.size() > 1)
    {
        arr.pop_front();
        arr.push_back(arr.front());
        arr.pop_front();
    }
    cout << arr.front();
}