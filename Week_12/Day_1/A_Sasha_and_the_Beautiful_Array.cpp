#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector <int> a(n); fi0(n) cin >> a[i];
        
        sort(a.begin(), a.end());

        ll sum = 0;
        for(int i = 1; i < n; i++) sum += (a[i]-a[i-1]);

        cout << sum << '\n';
    }

    return 0;
}