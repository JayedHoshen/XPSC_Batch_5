#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;

    // for(int i = 1; i <= n; i++) { // o(n)
    //     if(n%i == 0) cout << i << " ";
    // }
    // cout << '\n';

    // o(sqrt(n))
    vector <int> v;
    for(int i = 1; i*i <= n; i++) {
        if(n%i == 0) {
            v.push_back(i);
            if((n/i) != i) v.push_back(n/i);
        }
    }

    sort(v.begin(), v.end());

    for(auto val : v) cout << val << " ";
    cout << '\n';

    return 0;
}