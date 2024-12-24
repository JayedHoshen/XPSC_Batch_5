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
        int n; cin >> n;

        vector <int> v;
        for(int i = 1; i*i <= n; i++) {
            if(n%i == 0) {
                v.push_back(i);
                if((n/i) != i) v.push_back(n/i);
            }
        }
        
        cout << v.size() << '\n';
    }

    return 0;
}