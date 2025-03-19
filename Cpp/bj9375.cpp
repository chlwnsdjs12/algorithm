#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for(int testcase=0; testcase<t; testcase++)
    {
        int n;
        cin >> n;

        unordered_map<string, string> clothes;
        for(int i=0; i<n; i++)
        {
            string cloth, type;
            cin >> cloth >> type;
            clothes[cloth] = type;
        }

        unordered_map<string, vector<string>> group;
        for (const auto& each : clothes) 
        {
            // 옷 종류의 그룹에 각각의 해당되는 옷 넣기
            group[each.second].push_back(each.first);
        }

        // 부분집합 계산
        int count = 1; // 공집합 포함
        for (const auto& each : group) 
        {
            count *= (each.second.size() + 1);
        }

        // 공집합 제거
        count--;
        cout << count << "\n";
    }
}