#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int bfs(vector<bool> visited, int start, int want)
{
    queue<pair<int, int>> que;
    que.push(make_pair(start, 0));
    visited[start] = true;

    while(!que.empty())
    {
        int current_locate = que.front().first;
        int current_time = que.front().second;
        que.pop();

        if(current_locate == want)
        {
            return current_time;
        }

        int move;       // 움직일려는 좌표
        // 현재 좌표 - 1 만큼 이동
        move = current_locate - 1;
        if(move >= 0 && !visited[move])
        {
            que.push(make_pair(move, current_time + 1));
            visited[move] = true;
        }
        // 현재 좌표 + 1 만큼 이동
        move = current_locate + 1;
        if(move < 100001 && !visited[move])
        {
            que.push(make_pair(move, current_time + 1));
            visited[move] = true;
        }
        // 현재 좌표 * 2 만큼 순간 이동동
        move = current_locate * 2;
        if(move < 100001 && !visited[move])
        {
            que.push(make_pair(move, current_time + 1));
            visited[move] = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    
    vector<bool> visited(100001);
    int ans = bfs(visited, n, k);

    cout << ans;
}