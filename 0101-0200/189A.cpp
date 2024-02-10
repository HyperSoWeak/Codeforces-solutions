#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define INF 1e9+7
using namespace std;

signed main() {
    hyper;
    int n, w[3];
    cin >> n >> w[0] >> w[1] >> w[2];
    int dp[n+1];
    dp[0] = 0;
    rep1(i,1,n) dp[i] = -INF;
    rep1(i,1,n) rep(j,0,3) {
        if(i >= w[j]) dp[i] = max(dp[i], dp[i - w[j]] + 1);
    }
    cout << dp[n];
}