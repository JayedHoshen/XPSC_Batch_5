#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a;
    cin >> n;

    map <int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> a;
        mp[a]++;
    }

    int ans = 0, tmp;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        tmp = it->second;
        ans = max(ans, tmp);
    }

    cout << ans << '\n';
    

    return 0;
}