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

int lcm(int a, int b) {
    return a / __gcd(a, b) * b;
}

signed main() {
    hyper;
    int x, ai, aj=INF;
    cin >> x;
    for(int i=sqrt(x); i>=1; --i) {
        int j = x/i;
        if(lcm(i, j) == x) {
            cout << i << " " << j;
            return 0;
        }
    }
}