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

        int mid;
        if(n&1) mid = n/2;
        else mid = (n/2) - 1;

        int cnt = 1, tmp = a[mid];
        for(int i = mid+1; i < n; i++) {
            if(a[i] < tmp+1) cnt++;
            else break;
        }

        cout << cnt << '\n';
    }

    return 0;
}