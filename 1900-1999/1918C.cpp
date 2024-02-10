#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define int long long
using namespace std;

int solve(int a, int b, int r) {
    int mask=0;
    if(b > a) swap(a, b);
    bool isHigh = true;
    bool canChange = false;
    for(int i=63; i>=0; --i) {
        bool ai = (a >> i) & 1LL;
        bool bi = (b >> i) & 1LL;
        bool ri = (r >> i) & 1LL;
        bool now;
        if(ai == bi) now = 0;
        else if(isHigh) {
            isHigh = false;
            now = 0;
        } else {
            if(ai > bi) { // change
                if(canChange || ri == 1) now = 1;
                else now = 0;
            } else now = 0;
        }
        if(ri > now) canChange = true;
        mask = (mask << 1) + now;
    }
    return (a ^ mask) - (b ^ mask);
}

signed main() {
    hyper;
    int t;
    cin >> t;
    while(t--) {
        int a, b, r;
        cin >> a >> b >> r;
        cout << solve(a,b,r) << '\n';
    }
}
