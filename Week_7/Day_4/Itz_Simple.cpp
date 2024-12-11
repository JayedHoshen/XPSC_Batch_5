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
        int n, k, p; cin >> n >> k >> p;

        int a[n], sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }


        sort(a, a+n, greater<int>());

        int mx = a[0];

        k += mx;
        p += (sum-mx);

        if(k > p) cout << "Ved" << '\n';
        else if(k < p) cout << "Varun" << '\n';
        else cout << "Equal" << '\n';
    }

    return 0;
}