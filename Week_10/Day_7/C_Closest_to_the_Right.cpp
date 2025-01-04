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
        int l = 0, r = n - 1, ans = n, mid;
        while(l <= r) {
            mid = l + (r-l) / 2;
            if(key <= a[mid]) {
                r = mid - 1; ans = mid;
            }
            else l = mid + 1;
        }

        cout << ans+1 << '\n';
    }

    return 0;
}