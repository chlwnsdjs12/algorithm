#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr;
    
    arr.push_back(0);

    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}