#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define pii pair<int, int>
#define INF 1e9+7
using namespace std;

bool check(int x) {
    int q=x/11, r=x%11;
    if(q/10 >= r) return true;
    else return false;
}

signed main() {
    hyper;
    int t, x;
    cin >> t;
    while(t--) {
        cin >> x;
        cout << (check(x) ? "YES\n" : "NO\n");
    }
}