#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define int long long
using namespace std;

const int MAXN = 1e5+5;

signed main() {
    hyper;
    int t;
    cin >> t;
    while(t--) {
        int n, m, x, y, a[MAXN];
        cin >> n;
        rep(i,0,n) cin >> a[i];
        bool dir[MAXN];
        int lft[MAXN], rht[MAXN];
        dir[0] = 1, dir[n-1] = 0;
        rep(i,1,n-1) dir[i] = ((a[i+1]-a[i]) < (a[i]-a[i-1]));

        rht[0] = 0;
        rep(i,1,n) {
            if(dir[i-1]) rht[i] = rht[i-1] + 1;
            else rht[i] = rht[i-1] + (a[i]-a[i-1]);
        }

        lft[n-1] = 0;
        for(int i=n-2; i>=0; --i) {
            if(!dir[i+1]) lft[i] = lft[i+1] + 1;
            else lft[i] = lft[i+1] + (a[i+1]-a[i]);
        }
        
        cin >> m;
        while(m--) {
            cin >> x >> y;
            x--; y--;
            if(x < y) cout << rht[y]-rht[x] << '\n';
            else cout << lft[y]-lft[x] << '\n';
        }
    }
}