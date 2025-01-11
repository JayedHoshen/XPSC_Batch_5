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

        vector <int> a(n), tmp, ans;
        fi0(n) cin >> a[i];

        int mn = a[0], indx = n;
        tmp.push_back(mn);
        for(int i = 1; i < n; i++) {
            if(mn <= a[i]) {mn = a[i]; tmp.push_back(mn);}
            else {indx = i; break;}
        }

        for(int i = indx; i < n; i++) ans.push_back(a[i]);
        for(int i = 0; i < tmp.size(); i++) ans.push_back(tmp[i]);

        if(is_sorted(ans.begin(), ans.end())) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }

    return 0;
}