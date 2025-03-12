#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    int n, m;
    for(int tc=0; tc<testcase; tc++)
    {
        cin >> n >> m;
        queue<int> que;
        
        for(int i=0; i<n; i++)
        {
            int num;
            cin >> num;
            que.push(num);
        }

        int count = 0;
        while(que.empty() == false)
        {
            // que에서 가장 큰 수 찾기
            // 만약 que에서 가장 큰 수가 빠져나가면 다시 큰 수를 설정해야함
            int big = 0;
            for(int i=0; i<que.size(); i++)
            {
                if(que.front() > big)
                {
                    big = que.front();
                }
                que.push(que.front());
                que.pop();
            }
            // 맨 앞 문서의 중요도가 가장 크지 않으면 맨 뒤로 보냄
            if(que.front() < big)
            {
                que.push(que.front());
                que.pop();
                // 원하는 문서가 뒤로 갈 경우
                m = ( m > 0 ) ? m - 1 : que.size() - 1;
            }
            // 맨 앞 문서의 중요도가 가장 크면 출력
            else
            {
                count++;
                que.pop();
                // 원하는 문서를 출력한 경우
                if(m == 0)
                {
                    cout << count << "\n";
                    break;
                }
                m--;
            }
        }
    }
}