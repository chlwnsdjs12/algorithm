#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int bfs(int nodes, int start_node, const vector<vector<int>>& connected)
{
    int count = 0;                          // 감염당한 컴퓨터 수
    queue<int> que;
    vector<bool> visited(nodes+1);
    vector<int> infected(nodes+1, 0);       // 감염된 컴퓨터 배열

    que.push(start_node);
    visited[start_node] = true;
    while(!que.empty())
    {
        int x = que.front();
        infected[x] = 1;
        que.pop();
        for(int i=0; i<connected[x].size(); i++)
        {
            int y = connected[x][i];
            if(!visited[y])
            {
                que.push(y);
                visited[y] = true;
            }
        }
    }

    // 최초 감염된 컴퓨터는 해당 문제에서 제외
    infected[start_node] = 0;
    for(int i=0; i<infected.size(); i++)
    {
        if(infected[i] == 1)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;      // 컴퓨터 수
    cin >> n; 

    int c;      // 연결된 쌍의 수
    cin >> c;

    vector<vector<int>> connected(n+1);
    for(int i=0; i<c; i++)
    {
        int x, y;
        cin >> x >> y;
        // 서로 연결되어 있으므로
        connected[x].push_back(y);
        connected[y].push_back(x);
    }

    cout << bfs(n, 1, connected);
}