#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define INF 1e9+7
using namespace std;

const int MAXN = 150005;

signed main() {
    hyper;
    int n, k, a[MAXN];
    cin >> n >> k;
    rep(i,0,n) cin >> a[i];
    int sum=0;
    rep(i,0,k) sum += a[i];
    int minsum=sum, idx=0;
    rep1(i,1,n-k) {
        sum = sum - a[i-1] + a[i+k-1];
        if(sum < minsum) {
            minsum = sum;
            idx = i;
        }
    }
    cout << idx+1;
}