#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k; cin >> n >> k;
    k--;

    vector <ll> v;
    for(ll i = 1; i*i <= n; i++) {
        if(n%i == 0) {
            v.push_back(i);
            if((n/i) != i) v.push_back(n/i);
        }
    }

    sort(v.begin(), v.end());

    if(v.size() <= k) cout << -1 << '\n';
    else cout << v[k] << '\n';

    return 0;
}