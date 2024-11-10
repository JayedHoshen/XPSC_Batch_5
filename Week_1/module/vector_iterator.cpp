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

    // auto it = v.begin()+1;
    // cout << *it << '\n';

    // auto it2 = v.end()-1;
    // auto it = --v.end();
    // cout << *it2 << '\n';

    for(auto it = v.begin(); it != v.end(); it++) cout << *it << " ";
    cout << '\n';
    
    // reverse vector
    // for(auto it = v.rbegin(); it != v.rend(); it++) cout << *it << " ";
    // cout << '\n';

    return 0;
}