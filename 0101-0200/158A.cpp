#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
    hyper;
    int n, k, a[55], cnt=0;
    cin >> n >> k;
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cnt += (a[i] >= a[k-1] && a[i] > 0);
    cout << cnt;
}