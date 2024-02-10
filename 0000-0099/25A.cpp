#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
    hyper;
    int n, a[105], cnt[2]={0};
    cin >> n;
    rep(i,0,n) {
        cin >> a[i];
        cnt[a[i]%2]++;
    }

    if(cnt[0] >= 2) {
        rep(i,0,n) {
            if(a[i]%2 == 1) {
                cout << i+1;
                return 0;
            }
        }
    } else {
        rep(i,0,n) {
            if(a[i]%2 == 0) {
                cout << i+1;
                return 0;
            }
        }
    }
}