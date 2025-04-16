#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, str_len;
    string str;
    cin >> n >> str_len >> str;
    int ans = 0;

    // 원하는 조건
    string want;
    for(int i=0; i<2*n+1; i++)
    {
        want = (i % 2 == 0) ? want + 'I' : want + 'O';
    }

    // 맨 처음의 틀이 조건을 만족하는 경우 검사
    string window;
    for(int i=0; i<2*n+1; i++)
    {
        window += str[i];
    }
    if(window == want)
    {
        ans++;
    }

    for(int i=2*n+1; i<str_len; i++)
    {
        window = window.substr(1);  // 틀의 맨 앞 요소 제거
        window += str[i];           // 틀의 맨 뒤에 요소 추가
        // 현재 틀과 조건이 만족하는 경우
        if(window == want)
        {
            ans++;
        }
    }

    cout << ans;
}