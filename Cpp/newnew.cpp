#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<int, int> arr;

    int end = 0;
    for(int i=end; i<5; i++)
    {
        arr[i]++;
        end++;
        cout << static_cast<int>(arr.size()) << "\n";
    }
}