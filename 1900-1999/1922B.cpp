#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define int long long
using namespace std;

int nC2(int n) {
    return n * (n-1) / 2;
}

int nC3(int n) {
    return n * (n-1) * (n-2) / 6;
}

signed main() {
    hyper;
    const int MAXN = 3e5+5;
    int t, n, a[MAXN];
    cin >> t;
    while(t--) {
        cin >> n;
        rep(i,0,n) cin >> a[i];
        sort(a, a+n);
        a[n] = 2e9;
        int cnt=1, last=a[0], idx=0, ans=0;
        rep1(i,1,n) {
            if(a[i] == last) {
                cnt++;
            } else {
                if(cnt >= 2) ans += idx * nC2(cnt);
                if(cnt >= 3) ans += nC3(cnt);
                idx = i;
                cnt = 1;
                last = a[i];
            }
        }
        cout << ans << '\n';
    }
}