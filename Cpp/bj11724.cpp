#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(const vector<vector<int>>& connected, vector<bool>& visited, int start_node)
{
    visited[start_node] = true;
    for(int each : connected[start_node])
    {
        if(visited[each] == false)
        {
            dfs(connected, visited, each);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int nodes, lines;
    cin >> nodes >> lines;

    vector<vector<int>> connected(nodes+1);
    vector<bool> visited(nodes+1);
    for(int i=0; i<lines; i++)
    {
        int x, y;
        cin >> x >> y;
        connected[x].push_back(y);
        connected[y].push_back(x);
    }
    for(int i=1; i<connected.size(); i++)
    {
        sort(connected[i].begin(), connected[i].end());
    }

    // dfs가 실행되면 시작노드를 기준으로 연결된 노드들을 다 탐색하고 함수 종료
    // 따라서 dfs가 실행될때마다 count++
    int count = 0;
    for(int i=1; i<nodes+1; i++)
    {
        if(visited[i] == false)
        {
            dfs(connected, visited, i);
            count++;
        }
    }
    cout << count;
}