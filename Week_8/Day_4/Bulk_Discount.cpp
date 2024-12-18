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

        vector <int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        ll cost = 0;
        for(int i = 0; i < n; i++) cost += max(a[i]-i, 0);

        cout << cost << '\n';
    }

    return 0;
}