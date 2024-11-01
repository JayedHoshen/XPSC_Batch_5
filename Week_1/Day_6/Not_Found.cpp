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
        cnt[s['a' - i]]++;
    }

    for(int i = 0; i < 26; i++) cout << cnt[i] << ' ';

    return 0;
}