#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
    hyper;
    int t, x, n;
    cin >> t;
    while(t--) {
        cin >> x >> n;
        int ans=1, xn=x/n;
        for(int i=1; i*i<=x; i++) {
            if(x%i == 0) {
                int j = x/i;
                if(i <= xn) ans = max(ans, i);
                if(j <= xn) ans = max(ans, j);
            }
        }
        cout << ans << '\n';
    }
}