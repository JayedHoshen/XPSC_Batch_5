#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int cnt(int a, int b, int c, int d, int e) {
    int s = 0;
    if(d == (c+b)) s++;
    if(e == (c+d)) s++;
    if(c == (a+b)) s++;
    return s;
}

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    vector <int> ans;
    while(tc--) {
        int a, b, d, e;
        cin >> a >> b >> d >> e;
        
        int mx = 0;
        for(int i = -200; i <= 200; i++) {
            int cal = cnt(a, b, i, d, e);
            mx = max(mx, cal);
        }
        ans.push_back(mx);
    }

    for(auto v : ans) cout << v << '\n';

    return 0;
}