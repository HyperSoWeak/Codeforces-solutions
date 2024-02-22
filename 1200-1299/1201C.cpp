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

const int MAXN = 2e5+5;

signed main() {
    hyper;
    int n, k, a[MAXN], b[MAXN];
    cin >> n >> k;
    rep(i,0,n) cin >> a[i];
    sort(a, a+n);
    int m = n / 2;
    rep(i,m+1,n) b[i-m] = a[i] - a[i-1];
    int ans = a[m];
    int i=1;
    while(i <= m && k >= i*b[i]) {
        k -= i*b[i];
        ans += b[i];
        i++;
    }
    ans += k/i;
    cout << ans;
}