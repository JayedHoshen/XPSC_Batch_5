#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    ll ara[n], sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
        sum += ara[i];
    }

    if(sum%2 == 0) cout << sum << '\n';
    else {
        sort(ara, ara+n);
        for(int i = 0; i < n; i++) {
            ll s = sum - ara[i];
            if(s%2 == 0) {
                cout << s << '\n';
                break;
            }
        }
    }

    return 0;
}