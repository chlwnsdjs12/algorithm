#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int g_can = 0;

void search_people(const vector<vector<string>>& place, unordered_map<string, bool>& visited, int row, int col)
{
    string key = to_string(row) + "," + to_string(col);
    visited[key] = true;

    if(row > 0 && !visited[to_string(row-1) + "," + to_string(col)])
    {
        if(place[row-1][col] == "O")
        {
            search_people(place, visited, row-1, col);
        }
        else if(place[row-1][col] == "P")
        {
            g_can++;
            search_people(place, visited, row-1, col);
        }
    }
    if(row < place.size()-1 && !visited[to_string(row+1) + "," + to_string(col)])
    {
        if(place[row+1][col] == "O")
        {
            search_people(place, visited, row+1, col);
        }
        else if(place[row+1][col] == "P")
        {
            g_can++;
            search_people(place, visited, row+1, col);
        }
    }
    if(col > 0 && !visited[to_string(row) + "," + to_string(col-1)])
    {
        if(place[row][col-1] == "O")
        {
            search_people(place, visited, row, col-1);
        }
        else if(place[row][col-1] == "P")
        {
            g_can++;
            search_people(place, visited, row, col-1);
        }
    }
    if(col < place[0].size()-1 && !visited[to_string(row) + "," + to_string(col+1)])
    {
        if(place[row][col+1] == "O")
        {
            search_people(place, visited, row, col+1);
        }
        else if(place[row][col+1] == "P")
        {
            g_can++;
            search_people(place, visited, row, col+1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int row, col;
    cin >> row >> col;

    vector<vector<string>> place(row, vector<string>(col));    // 실제 지도
    unordered_map<string, bool> visited;                 // 실제 지도 기반 방문 기록
    int i_row, i_col;                                    // 현재 내가 있는 위치의 row, col

    for(int i=0; i<row; i++)
    {
        string inputs;
        cin >> inputs;
        for(int j=0; j<col; j++)
        {
            place[i][j] = string(1, inputs[j]);
            string key = to_string(i) + "," + to_string(j);
            visited[key] = false;
            if(place[i][j] == "I")
            {
                i_row = i;
                i_col = j;
            }
        }
    }

    search_people(place, visited, i_row, i_col);
    
    if(g_can == 0)
    {
        cout << "TT";
    }
    else
    {
        cout << g_can;
    }
}