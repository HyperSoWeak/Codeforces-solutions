#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define ll long long
using namespace std;

int main() {
    hyper;
    ll n, m, a;
    cin >> n >> m >> a;
    cout << ((n-1) / a + 1) * ((m-1) / a + 1);
}