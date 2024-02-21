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
int n, b, a[MAXN], cnt=0;

int bSearch(int t, int l, int r) {
    while(l < r) {
        int m = (l+r) / 2;
        if(a[m] >= t) r = m;
        else l = m + 1;
    }
    if(a[l] < t) return -1;
    return l;
}

signed main() {
    hyper;
    cin >> n;
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) {
        cin >> b;
        a[i] -= b;
    }
    sort(a, a+n);
    rep(i,0,n-1) {
        if(a[i] <= 0) {
            int res = bSearch(-a[i]+1, i+1, n-1);
            if(res != -1) cnt += n-res;
        }
        else cnt += n-i-1;
    }
    cout << cnt;
}
