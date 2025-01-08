#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    vector <vector<int>> ans;
    while(tc--) {
        int n; cin >> n;
        vector <int> a(n), tmp(n, 0);

        fi0(n) cin >> a[i];

        int mx = -1;
        for(int i = 0; i < n; i++) {
            if(a[i] > mx) {
                tmp[i] = 1;
                mx = a[i];
            }
        }
        ans.push_back(tmp);
    }

    for(auto v : ans) {
        for(auto val : v) cout << val << " ";
        cout << '\n';
    }

    return 0;
}