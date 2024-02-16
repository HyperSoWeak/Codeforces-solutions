#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define pii pair<int, int>
#define INF 1e9+7
#define int long long
using namespace std;

const int MAXN = 1e5+5;
int n, t, a[MAXN];

int bSearch(int t) {
    int l=0, r=n;
    while(l < r) {
        int mid = (l+r+1) / 2;
        if(a[mid] <= t) l = mid;
        else r = mid - 1;
    }
    return l;
}

signed main() {
    hyper;
    cin >> n >> t;
    a[0] = 0;
    rep1(i,1,n) {
        cin >> a[i];
        a[i] += a[i-1];
    }
    int ans = -1;
    rep1(i,0,n) {
        int r = bSearch(a[i]+t);
        ans = max(ans, r - i);
    }
    cout << ans;
}