#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
    hyper;
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n%4 != 0) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        rep1(i,1,n/2) cout << i*2 << ' ';
        rep1(i,1,n/2-1) cout << i*2-1 << ' ';
        cout << n+(n/2-1) << '\n';
    }
}