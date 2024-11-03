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

    auto mn = min_element(v.begin(), v.end());
    cout << *mn << '\n';


    auto mx = max_element(v.begin(), v.end());
    int mxPosition = mx - v.begin();
    cout << *mx <<'\n';
    cout << mxPosition << '\n';

    return 0;
}