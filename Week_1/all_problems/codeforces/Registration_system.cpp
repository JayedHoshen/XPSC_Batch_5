#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    map <string, int> mp;

    while(tc--) {
        string name;
        cin >> name;

        if(mp[name] == 0) cout << "OK\n";
        else cout << name << mp[name] << '\n';
        mp[name]++;
    }

    return 0;
}