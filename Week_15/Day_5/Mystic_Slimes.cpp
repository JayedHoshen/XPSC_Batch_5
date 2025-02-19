#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int solve(vector <int> &A) {
    int N = A.size(), max_final_power = 0;

    for (int M = 0; M < N; M++) {
        int M_power = A[M], LeftPower = 0;

        if (M > 0) {
            LeftPower = A[M - 1];
            for (int i = M - 2; i >= 0; i--) {
                int opt1 = max(0, LeftPower - A[i]);
                int opt2 = max(0, A[i] - LeftPower);
                LeftPower = min(opt1, opt2);
            }
        }
        if (M > 0) {
            int opt1 = max(0, M_power - LeftPower);
            int opt2 = max(0, LeftPower - M_power);
            M_power = max(opt1, opt2);
        }

        int RightPower = 0;
        if (M < N - 1) {
            RightPower = A[M + 1];
            for (int i = M + 2; i < N; i++) {
                int opt1 = max(0, RightPower - A[i]);
                int opt2 = max(0, A[i] - RightPower);
                RightPower = min(opt1, opt2);
            }
        }
        if (M < N - 1) {
            int opt1 = max(0, M_power - RightPower);
            int opt2 = max(0, RightPower - M_power);
            M_power = max(opt1, opt2);
        }

        max_final_power = max(max_final_power, M_power);
    }

    return max_final_power;
}

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector <int> a(n); fi0(n) cin >> a[i];
        cout << solve(a) << '\n';
    }

    return 0;
}