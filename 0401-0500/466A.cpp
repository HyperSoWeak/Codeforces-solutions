#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
    hyper;
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << min(n*a, n/m*b + min((n%m)*a, b));
}