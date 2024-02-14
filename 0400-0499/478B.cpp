#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define pii pair<int, int>
#define INF 1e9+7
#define int long long
using namespace std;

int nC2(int n) {
    return n * (n-1) / 2;
}

signed main() {
    hyper;
    int n, m;
    cin >> n >> m;
    int q=n/m, r=n%m;
    cout << nC2(q+1) * r + nC2(q) * (m-r) << ' ';
    cout << nC2(n-m+1);
}