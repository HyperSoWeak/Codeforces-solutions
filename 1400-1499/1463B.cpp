#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define pii pair<int, int>
#define pb push_back
#define F first
#define S second
#define INF 0x3f3f3f3f
#define int long long
using namespace std;

signed main() {
    hyper;
    int t, n, a[55];
    cin >> t;
    while(t--) {
        int cnt[2] = {0};
        cin >> n;
        rep(i,0,n) {
            cin >> a[i];
            cnt[i%2] += a[i];
        }
        bool r = (cnt[0] > cnt[1]);
        rep(i,0,n) {
            if(i%2 == r) cout << 1 << ' ';
            else cout << a[i] << ' ';
        }
        cout << '\n';
    }
}