#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

void solve() {
    int N; cin >> N;

    vector<int> A(N); unordered_map<int, int> counts;

    fi0(N) { cin >> A[i]; counts[A[i]]++;}
    int total_n = N, c0 = counts[0];

    for (auto &[num, count] : counts) {
        if (num != 0) {
            int pairs = count / 2;
            total_n -= pairs;
            c0 += pairs;
        }
    }

    while (c0 >= 2) {
        int pairs = c0 / 2;
        total_n -= pairs;
        c0 -= pairs;
    }
    cout << total_n << "\n";
}

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}