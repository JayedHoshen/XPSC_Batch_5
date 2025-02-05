#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int streak(int n, vector<int> &a) {
    int mx = 1, cr = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] >= a[i-1]) cr++;
        else {
            mx = max(mx, cr);
            cr = 1;
        }
    }
    return max(mx, cr);
}

int solve(int n, int x, vector <int> &a) {
    int st = streak(n, a);
    int mx = st;
    fi0(n) {
        int org = a[i];
        a[i] *= x;
        mx = max(mx, streak(n, a));
        a[i] = org;
    }
    return mx;
}

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        int n, x; cin >> n >> x;
        vector <int> a(n); fi0(n) cin >> a[i];
        cout << solve(n, x, a) << '\n';
    }

    return 0;
}