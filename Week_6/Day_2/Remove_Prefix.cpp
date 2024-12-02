#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    while(tc--) {
        int n; cin >> n;

        int a[n];
        map <int, int> mp;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        int rem = n, ans = 0, i = 0;
        while(rem != mp.size()) {
            ans++;
            mp[a[i]]--;
            if(mp[a[i]] == 0) mp.erase(a[i]);
            i++; rem--;
        }
        cout << ans << '\n';
    }

    return 0;
}