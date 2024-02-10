#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

signed main() {
    hyper;
    int n, a, cnt[5]={0}, ans=0;
    cin >> n;
    rep(i,0,n) {
        cin >> a;
        cnt[a]++;
    }
    while(n > 0) {
        int remain = 4;
        for(int i=4; i>=1; --i) {
            while(cnt[i] > 0 && remain >= i) {
                cnt[i]--;
                remain -= i;
                n--;
            }
        }
        ans++;
    }
    cout << ans;
}