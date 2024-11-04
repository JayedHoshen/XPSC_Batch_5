#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    int ara[n];
    for(int i = 0; i < n; i++) cin >> ara[i];
    
    vector <int> v;
    for(int i = 0; i < n; i++) {
        if(ara[i] != x) v.push_back(ara[i]);
    }

    for(auto val : v) cout << val << " ";
    cout << '\n';

    return 0;
}