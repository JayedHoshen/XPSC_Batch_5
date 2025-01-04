#include <bits/stdc++.h>
#define FIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fi0(n) for(int i = 0; i < n; i++)
#define ll long long int
using namespace std;

int main()
{
    FIO(); 

    int n, q; cin >> n >> q;
    vector <int> a(n); fi0(n) cin >> a[i];

    while(q--) {
        int key; cin >> key;

        // calculated last occurrence
        int l = 0, r = n-1, last = -1;
        while(l <= r) {
            int mid = l + (r-l) / 2;
            if(key == a[mid]) {
                last = mid;
                l = mid + 1; // last occurrence
            }
            else if(key < a[mid]) r = mid - 1;
            else l = mid + 1;
        }

        // calculated first occurrence
        int first = -1; l = 0, r = n-1;
        while(l <= r) {
            int mid = l + (r-l) / 2;
            if(key == a[mid]) {
                first = mid;
                r = mid - 1; // fast occurrence
            }
            else if(key < a[mid]) r = mid - 1;
            else l = mid + 1;
        }

        // calculated total occurrence
        int total_occurrence = last - first; 
        cout << total_occurrence+1 << '\n';
    }

    return 0;
}