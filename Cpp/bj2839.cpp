#include <iostream>
#include <queue>
#include <utility>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<int, int> visited;
    queue<pair<int, int>> que;

    que.push(make_pair(n, 0));
    int result = -1;

    while(que.empty() == false)
    {
        int num = que.front().first;
        int sets = que.front().second;

        if(num > 0)
        {
            // num - 3에 처음 방문
            if(num > 3 && visited[num-3] == 0)
            {
                visited[num-3] = 1;
                que.push(make_pair(num-3, sets + 1));
            }
            else if(num - 3 == 0)
            {
                result = sets + 1;
                cout << result;
                break;
            }
            // num - 5에 처음 방문
            if(num > 5 && visited[num-5] == 0)
            {
                visited[num-5] = 1;
                que.push(make_pair(num-5, sets + 1));
            }
            else if(num - 5 == 0)
            {
                result = sets + 1;
                cout << result;
                break;
            }
        }
        else
        {
            cout << result;
            break;
        }
        que.pop();
        if(que.empty())
        {
            cout << result;
        }
    }
}