#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int sz = s.size();
    int cnt[27];

    for(int i = 0; i < 26; i++) cnt[i] = 0;

    for(int i = 0; i < sz; i++) {
        cnt[s[i]-'a']++;
    }

    bool flag = 1;
    int ans;
    for(int i = 0; i < 26; i++) {
        if(cnt[i] == 0) {
            ans = i; flag = 0;
            break;
        }
    }

    if(flag) cout << "None\n";
    else cout << char(ans+'a') << '\n';

    return 0;
}