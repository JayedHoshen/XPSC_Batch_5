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
        string s; cin >> s;

        int cnt = 0;
        for(int i = 0; i < n; i++) if((i>0) && (s[i] != s[i-1])) cnt++;

        cout << (cnt+1) / 2 << '\n';
    }

    return 0;
}