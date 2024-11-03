#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // vector <int> v(n);
    // vector <int> v;

    // for(int i = 0; i < n; i++) {
    //     // cin >> v[i];
    //     int a;
    //     cin >> a;
    //     v.push_back(a);
    // }

    // cout << v.size() << '\n';

    // cout << v.empty() << '\n';
    // cout << v.back() << '\n';
    // cout << v.front() << '\n';
    // v.pop_back();
    // cout << v.back() << '\n';
    // v.clear();
    // cout << v.empty() << '\n';
    // cout << v.size() << '\n';

    // for(int i = 0; i < n; i++) cout << v[i] << " ";
    // cout << '\n';

    // v.clear();
    // cout << v.empty() << '\n';
    // cout << v.size() << '\n';

    vector <int> v(n);

    // v.assign(n, 10);
    for(int i = 0; i < n; i++) cin >> v[i];

    v.resize(n/2, 2);

    for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
    cout << '\n';

    return 0;
}