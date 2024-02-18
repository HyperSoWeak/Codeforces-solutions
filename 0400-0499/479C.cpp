#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define pii pair<int, int>
#define F first
#define S second
#define INF 1e9+7
#define int long long
using namespace std;

const int MAXN = 5005;

signed main() {
    hyper;
    int n;
    pii a[MAXN];
    cin >> n;
    rep(i,0,n) cin >> a[i].F >> a[i].S;
    sort(a, a+n);
    int ans = -1;
    rep(i,0,n) {
        if(ans > a[i].S) ans = max(ans, a[i].F);
        else ans = a[i].S;
    }
    cout << ans;
}