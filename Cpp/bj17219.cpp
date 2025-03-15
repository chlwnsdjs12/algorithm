#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> site;

    for(int i=0; i<n; i++)
    {
        string site_name, site_pw;
        cin >> site_name >> site_pw;
        site[site_name] = site_pw;
    }

    for(int i=0; i<m; i++)
    {
        string site_name;
        cin >> site_name;
        cout << site[site_name] << "\n";
    }
}