#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

vector <string> p = {"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};
int minimum_option(int n, string &s) {
    int mn = INT_MAX;
    for(auto v : p) {
        int cnt = 0;
        for(int i = 0; i < n; i++) if(s[i] != v[i%3]) cnt++;
        mn = min(mn, cnt);
    }
    return mn;
}

int main()
{
    FIO(); 

    int tc = 1; cin >> tc;
    while(tc--) {
        int n; cin >> n; 
        string s; cin >> s;

        cout << minimum_option(n, s) << '\n';
    }

    return 0;
}