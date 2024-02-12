#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define pii pair<int, int>
#define INF 1e9+7
using namespace std;

#define neq(a,b,c) (a!=b && b!=c && c!=a)

signed main() {
    hyper;
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        pii a[3][n];
        rep(i,0,3) {
            rep(j,0,n) {
                cin >> a[i][j].first;
                a[i][j].second = j;
            }
            sort(a[i], a[i]+n, greater<>());
        }
        int ans = -1;
        rep(i,0,3) rep(j,0,3) rep(k,0,3) {
            if(neq(a[0][i].second, a[1][j].second, a[2][k].second)) {
                ans = max(ans, a[0][i].first + a[1][j].first + a[2][k].first);
            }
        }
        cout << ans << '\n';
    }
}