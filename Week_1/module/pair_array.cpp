#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    pair <string, int> students[n]; // pair of array

    for(int i = 0; i < n; i++) {
        cin >> students[i].first >> students[i].second;
    }

    for(int i = 0; i < n; i++) {
        cout << students[i].first << " " << students[i].second << '\n';
    }

    // range base for loop
    // for(auto [x,y] : students) { // c++17 up to support
    //     cout << x << " " << y << '\n';
    // }

    return 0;
}