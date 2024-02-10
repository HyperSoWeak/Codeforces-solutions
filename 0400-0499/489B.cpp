#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define INF 1e9+7
using namespace std;

const int MAXN = 105;

signed main() {
    hyper;
    int n, m, a[MAXN], b[MAXN];
    cin >> n;
    rep(i,0,n) cin >> a[i];
    cin >> m;
    rep(i,0,m) cin >> b[i];
    sort(a, a+n);
    sort(b, b+m);
    int i=0, j=0, ans=0;
    while(i < n && j < m) {
        if(abs(a[i] - b[j]) <= 1) {
            ans++;
            i++, j++;
        } else if(a[i] > b[j]) {
            j++;
        } else {
            i++;
        }
    }
    cout << ans;
}