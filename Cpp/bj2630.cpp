#include <iostream>
#include <vector>

using namespace std;

int g_blue = 0;
int g_white = 0;

void paper(const vector<vector<int>>& arr, int row_start, int row_end, int col_start, int col_end)
{
    // 맨 첫 숫자와 한 번이라도 다르면 무조건 나눠야함
    int first = arr[row_start][col_start];
    // 첫 번 째 숫자와 다르면 1로 바꿔서 더 이상의 탐색을 중지
    int stop = 0;
    for(int i=row_start; i<row_end; ++i)
    {
        for(int j=col_start; j<col_end; ++j)
        {
            if(arr[i][j] != first)
            {
                stop = 1;
                break;
            }
        }
        if(stop == 1)
        {
            break;
        }
    }

    // 탐색한 2차원 배열의 색이 모두 동일할 때
    if(stop == 0)
    {
        if(first == 1)
        {
            g_blue++;
        }
        else
        {
            g_white++;
        }
        return;
    }

    paper(arr, row_start, (row_start + row_end)/2, col_start, (col_start + col_end)/2);
    paper(arr, row_start, (row_start + row_end)/2, (col_start + col_end)/2, col_end);
    paper(arr, (row_start + row_end)/2, row_end, col_start, (col_start + col_end)/2);
    paper(arr, (row_start + row_end)/2, row_end, (col_start + col_end)/2, col_end);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    paper(arr, 0, n, 0, n);

    cout << g_white << "\n" << g_blue;
}