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

        int ara[n];
        for(int i = 0; i < n; i++) cin >> ara[i];

        for(int i = 0; i < n; i++) {
            int b; cin >> b;            
            string s; cin >> s;

            for(auto ch : s) {
                if(ch == 'D') {
                    ara[i]++;
                    if(ara[i] == 10) ara[i] = 0;
                }
                else {
                    ara[i]--;
                    if(ara[i] == -1) ara[i] = 9;
                }
            }
        }

        for(int i = 0; i < n; i++) cout << ara[i] << " ";
        cout << '\n';
    }

    return 0;
}