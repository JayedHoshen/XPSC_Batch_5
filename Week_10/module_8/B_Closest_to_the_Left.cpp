#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int n, q; cin >> n >> q;
    vector <int> a(n); fi0(n) cin >> a[i];

    while(q--) {
        int key; cin >> key;
        int l = 0, r = n-1, mid, ans = -1;
        while(l <= r) {
            mid = (l+r) / 2;
            if(key >= a[mid]) {
                ans = mid; l = mid+1;
            }
            else r = mid-1;
        }
        cout << ans+1 << '\n';
    }

    return 0;
}