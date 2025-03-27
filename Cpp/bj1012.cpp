#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

int bfs(int row, int col, const vector<vector<int>>& ground)
{
    int worms = 0;
    queue<pair<int, int>> que;
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(ground[i][j] == 1 && visited[i][j] == false)
            {
                que.push(make_pair(i, j));
                visited[i][j] = true;
                while(!que.empty())
                {
                    int x = que.front().first, y = que.front().second;
                    que.pop();
                    // x축 기준 가장자리가 아닌 경우
                    if(x > 0 && x < row-1)
                    {
                        // (x-1, y)가 배추가 있으면서 방문하지 않은 좌표인 경우
                        if(ground[x-1][y] == 1 && visited[x-1][y] == false)
                        {
                            que.push(make_pair(x-1, y));
                            visited[x-1][y] = true;
                        }
                        // (x+1, y)가 배추가 있으면서 방문하지 않은 좌표인 경우
                        if(ground[x+1][y] == 1 && visited[x+1][y] == false)
                        {
                            que.push(make_pair(x+1, y));
                            visited[x+1][y] = true;
                        }
                    }
                    else if(x == 0)
                    {
                        // (x+1, y)가 배추가 있으면서 방문하지 않은 좌표인 경우
                        if(ground[x+1][y] == 1 && visited[x+1][y] == false)
                        {
                            que.push(make_pair(x+1, y));
                            visited[x+1][y] = true;
                        }
                    }
                    else
                    {
                        // (x-1, y)가 배추가 있으면서 방문하지 않은 좌표인 경우
                        if(ground[x-1][y] == 1 && visited[x-1][y] == false)
                        {
                            que.push(make_pair(x-1, y));
                            visited[x-1][y] = true;
                        }
                    }
                    // y축 기준 가장자리가 아닌 경우
                    if(y > 0 && y < col-1)
                    {
                        // (x, y-1)가 배추가 있으면서 방문하지 않은 좌표인 경우
                        if(ground[x][y-1] == 1 && visited[x][y-1] == false)
                        {
                            que.push(make_pair(x, y-1));
                            visited[x][y-1] = true;
                        }
                        // (x, y+1)가 배추가 있으면서 방문하지 않은 좌표인 경우
                        if(ground[x][y+1] == 1 && visited[x][y+1] == false)
                        {
                            que.push(make_pair(x, y+1));
                            visited[x][y+1] = true;
                        }
                    }
                    else if(y == 0)
                    {
                        // (x, y+1)가 배추가 있으면서 방문하지 않은 좌표인 경우
                        if(ground[x][y+1] == 1 && visited[x][y+1] == false)
                        {
                            que.push(make_pair(x, y+1));
                            visited[x][y+1] = true;
                        }
                    }
                    else
                    {
                        // (x, y-1)가 배추가 있으면서 방문하지 않은 좌표인 경우
                        if(ground[x][y-1] == 1 && visited[x][y-1] == false)
                        {
                            que.push(make_pair(x, y-1));
                            visited[x][y-1] = true;
                        }
                    }
                }
                worms++;
            }
        }
    }
    return worms;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase, row, col, count;
    cin >> testcase;

    for(int t=0; t<testcase; t++)
    {
        cin >> row >> col >> count;
        // 입력받은 row, col을 바탕으로 2차원 0으로 초기화한 땅 생성
        vector<vector<int>> ground(row, vector<int>(col, 0));
        // 땅에 배추 심기
        for(int i=0; i<count; i++)
        {
            int x, y;
            cin >> x >> y;
            ground[x][y] = 1;
        }

        cout << bfs(row, col, ground) << "\n";
    }
}