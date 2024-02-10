#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define INF 1e9+7
using namespace std;

const int MAXN = 100005;
int n, a[MAXN], q, m;

int bSearch(int x) {
    int l=0, r=n-1;
    while(r - l > 1) {
        int mid = (l+r) / 2;
        if(a[mid] > x) {
            r = mid;
        } else if(a[mid] < x) {
            l = mid;
        } else return mid;
    }
    if(a[l] >= x) return l;
    else return r;
}

signed main() {
    hyper;
    cin >> n >> a[0];
    rep(i,1,n) {
        cin >> a[i];
        a[i] += a[i-1];
    }
    cin >> m;
    while(m--) {
        cin >> q;
        cout << bSearch(q) + 1 << '\n';
    }
}