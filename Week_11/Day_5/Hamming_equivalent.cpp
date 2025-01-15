#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int cntSetBit(int n) {
    int cnt = 0;
    while(n) {
        cnt += (n&1);
        n >>= 1;
    }
    return cnt;
}

bool beSorted(vector<int>&v) {
    map <int, vector<int>> bGroup;
    for(int i = 0; i < v.size(); i++) {
        int set = cntSetBit(v[i]);
        bGroup[set].push_back(i);
    }

    for(auto [x, y] : bGroup) {
        vector <int> val;
        for(auto idx : y) val.push_back(v[idx]);
        sort(val.begin(), val.end());
        for(int i = 0; i < y.size(); i++) v[y[i]] = val[i];
    }
    for(int i = 1; i < v.size(); i++) {
        if(v[i] < v[i-1]) return false;
    }
    return true;
}

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        int n; cin >> n;

        vector <int> a(n);
        fi0(n) cin >> a[i];

        cout << (beSorted(a) ? "YES" : "NO") << '\n';
    }

    return 0;
}