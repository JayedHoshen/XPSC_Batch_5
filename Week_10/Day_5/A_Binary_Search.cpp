#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int tc, n; 
    cin >> n >> tc;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    while(tc--) {
        int x; cin >> x;
        
        int L = 0, R = n-1;
        bool flag = false;
        while(L <= R) {
            int mid = (L+R) / 2;
            if(a[mid] == x) {
                flag = true;
                break;
            }
            if(x > a[mid]) L = mid+1;
            else R = mid-1;
        }
        if(flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}