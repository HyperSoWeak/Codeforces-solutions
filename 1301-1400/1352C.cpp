#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define INF 1e9+7
using namespace std;

signed main() {
    hyper;
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        int r = k % (n-1);
        cout << n * (k / (n-1)) + (r==0 ? -1 : r) << '\n';
    }
}