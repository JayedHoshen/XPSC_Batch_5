#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map <string, string> mp;
    string s1, s2;

    for(int i = 0; i < n; i++) {
        cin >> s1 >> s2;
        s2 += ';';
        mp[s2] = s1;
    }

    for(int i = 0; i < m; i++) {
        cin >> s1 >> s2;
        cout << s1 << " " << s2 << " #" + mp[s2] << '\n';
    }

    return 0;
}