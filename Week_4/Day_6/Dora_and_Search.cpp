#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc = 1; 
    cin >> tc;
 
    while(tc--) {
        int n;
        cin >> n;
        
        vector <int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
 
        int ck = 0;
 
        int l = 0, r = n-1;
        int mn = 1, mx = n;
        while(r >= l) {
            if((v[r] == mx && v[l] == mn) || (v[l] == mx &&  v[r] == mn)) {
                r--; l++;
                mn++; mx--;
            }
            else if(v[r] == mx) {
                r--; mx--;
            }
            else if(v[r] == mn) {
                r--; mn++;
            }
            else if(v[l] == mx) {
                l++; mx--;
            }
            else if(v[l] == mn) {
                l++; mn++;
            }
            else {
                cout << l+1 << " " << r+1 << '\n';
                ck = 1;
                break;
            }
        }
 
        if(ck == 0) cout << -1 << '\n';
    }
 
    return 0;
}