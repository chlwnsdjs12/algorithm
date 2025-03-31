#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(vector<bool>& visited, int start_node, const vector<vector<int>>& connected)
{
    visited[start_node] = true;
    cout << start_node << " ";

    for(int i=0; i<connected[start_node].size(); i++)
    {
        int a = connected[start_node][i];
        if(visited[a] == false)
        {
            visited[a] = true;
            dfs(visited, a, connected);
        }
    }
}

void bfs(int nodes, int start_node, const vector<vector<int>>& connected)
{
    queue<int> que;
    vector<bool> visited(nodes+1);
    
    que.push(start_node);
    visited[start_node] = true;
    while(!que.empty())
    {
        int current_node = que.front();
        cout << current_node << " ";
        que.pop();
        for(int i=0; i<connected[current_node].size(); i++)
        {
            int a = connected[current_node][i];
            if(visited[a] == false)
            {
                que.push(a);
                visited[a] = true;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int nodes, lines, start_node;
    cin >> nodes >> lines >> start_node;

    vector<vector<int>> connected(nodes+1);
    for(int i=0; i<lines; i++)
    {
        int x, y;
        cin >> x >> y;
        connected[x].push_back(y);
        connected[y].push_back(x);
    }
    for(int i=0; i<connected.size(); i++)
    {
        sort(connected[i].begin(), connected[i].end());
    }

    vector<bool> visited(nodes+1);
    dfs(visited, start_node, connected);
    cout << "\n";
    bfs(nodes, start_node, connected);
}