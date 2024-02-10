#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define INF 1e9+7
using namespace std;

signed main() {
    hyper;
    int n, x, cnt=0, sum=0, maxsum=-INF;
    cin >> n;
    rep(i,0,n) {
        cin >> x;
        if(x) {
            cnt++;
            sum--;
        } else sum++;
        maxsum = max(maxsum, sum);
        if(sum < 0) sum = 0;
    }
    cout << maxsum + cnt;
}