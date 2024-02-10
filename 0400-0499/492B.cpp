#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

signed main() {
    hyper;
    int n, l, a[1005];
    scanf("%d %d", &n, &l);
    rep(i,0,n) scanf("%d", &a[i]);
    sort(a, a+n);
    int maxn = -1;
    rep(i,0,n-1) {
        maxn = max(maxn, a[i+1]-a[i]);
    }
    printf("%.10llf", max((double)maxn/2, (double)max(a[0]-0, l-a[n-1])));
}
