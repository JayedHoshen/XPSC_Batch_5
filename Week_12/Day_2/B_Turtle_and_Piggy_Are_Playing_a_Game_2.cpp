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

        bool turtle = true, piggy = false;
        while(a.size() > 1) {
            if(turtle) {
                auto it = a.begin();
                a.erase(it);
                turtle = false;
                piggy = true;
            }
            else {
                auto it = a.end() - 1;
                a.erase(it);
                piggy = false;
                turtle = true;
            }
        }
        cout << a[0] << '\n';
    }

    return 0;
}