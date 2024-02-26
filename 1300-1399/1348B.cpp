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

signed main() {
    hyper;
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        int numcnt = 0, x;
        bool has[101] = {false};
        rep(i,0,n) {
            cin >> x;
            if(!has[x]) {
                has[x] = true;
                numcnt++;
            }
        }
        if(numcnt > k) {
            cout << "-1\n";
        }
        else {
            cout << n * k << '\n';
            vector<int> v;
            int kk = 0;
            rep1(i,1,100) {
                if(has[i]) {
                    v.push_back(i);
                    kk++;
                }
            }
            rep(i,0,k-kk) v.push_back(x);
            int len = v.size();
            rep(i,0,n) {
                rep(j,0,len) {
                    cout << v[j] << ' ';
                }
            }
            cout << '\n';
        }
    }
}