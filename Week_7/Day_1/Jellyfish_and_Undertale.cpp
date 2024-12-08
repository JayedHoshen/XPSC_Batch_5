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
        int a, b, n; cin >> a >> b >> n;

        vector <int> v(n);

        ll sum = b;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i]+1 <= a) sum += v[i];
            else sum += a-1;
        }

        cout << sum << '\n';
    }

    return 0;
}