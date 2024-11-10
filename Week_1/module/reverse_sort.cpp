#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    // reverse(v.begin(), v.end());
    
    // sort(v.begin(), v.end()); // asc
    // sort(v.rbegin(), v.rend()); // dsc
    // sort(v.begin(), v.end(), greater<int>()); // dsc

    for(auto val : v) cout << val << " ";
    cout << '\n';

    return 0;
}