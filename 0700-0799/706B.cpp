#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define INF 1e9+7
using namespace std;

const int MAXN = 100005;
int n, q, p[MAXN], m;

int bsearch(int x) {
    int l=0, r=n-1;
    while(l <= r) {
        int mid = (l+r) / 2;
        if(p[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return l;
}

signed main() {
    hyper;
    cin >> n;
    rep(i,0,n) cin >> p[i];
    sort(p, p+n);
    cin >> q;
    while(q--) {
        cin >> m;
        cout << bsearch(m) << '\n';
    }
}