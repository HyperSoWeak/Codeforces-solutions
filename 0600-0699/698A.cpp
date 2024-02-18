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

signed main() {
    hyper;
    int n, a[105], dp[105][3];
    cin >> n;
    rep1(i,1,n) cin >> a[i];
    memset(dp, 0x3f, sizeof(dp));
    rep(i,0,3) dp[0][i] = 0;
    rep1(i,1,n) {
        dp[i][0] = min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2])) + 1;
        if(a[i] & 1) dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
        if(a[i] & 2) dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
    }
    cout << min(dp[n][0], min(dp[n][1], dp[n][2]));
}