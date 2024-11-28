#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int check_kth_bit_on_or_off(int n, int k) {
    return (n >> k) & 1;
}

void print_on_and_off_bis(int n) {
    for(int k = 6; k >= 0; k--) {
        if(check_kth_bit_on_or_off(n, k)) cout << 1 << " ";
        else cout << 0 << " ";
    }
}

int turn_on_kth_bit(int n, int k) {
    return (n | (1 << k));
}

int turn_off_kth_bit(int n, int k) {
    return (n & (~(1 << k)));
}

int toggle_kth_bit(int n, int k) {
    return (n ^ (1 << k));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 27, k = 3;

    // cout << check_kth_bit_on_or_off(n, 3) << '\n';
    // print_on_and_off_bis(n);
    // cout << turn_on_kth_bit(n, k) << '\n';
    // cout << turn_off_kth_bit(n, k) << '\n';
    // cout << toggle_kth_bit(n, k) << '\n';
    cout << toggle_kth_bit(n, k) << '\n';
        
    return 0;
}