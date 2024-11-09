#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1; 
    cin >> tc;

    while(tc--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int cnt[26] = {0};

        for(int i = 0; i < n; i++) cnt[s[i]-'a']++;

        int count = 0;
        for(int i = 0; i < 26; i++) {
            if(cnt[i] % 2) count++;
        } 

        count--;

        if(count <= k && k <= n) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}