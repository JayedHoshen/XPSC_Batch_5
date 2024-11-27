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
        int n;
        cin >> n;

        vector <ll> a(n-1);
        for(int i = 0; i < n-1; i++) cin >> a[i];
    
        sort(a.begin(), a.end());

        int N = a[0] / 2 , p = (a[0]&1) ? a[0]/2+1 : a[0]/2;

        cout << N << " " << p << " ";
        for(int i = 1; i < n-1; i++) {
            N = a[i] - p;
            p = N;
            cout << N << " ";
        }
        cout << "\n";
    }

    return 0;
}