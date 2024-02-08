#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

signed main() {
    hyper;
    int n, m, ans=0;
    cin >> n >> m;
    while(m != n) {
        if(m > n) {
            if(m & 1) m++;
            else m /= 2;
        } else m++;
        ans++;
    }
    cout << ans;
}