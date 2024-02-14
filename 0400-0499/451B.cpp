#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define pii pair<int, int>
#define INF 1e9+7
using namespace std;

const int MAXN = 1e5+5;

signed main() {
    hyper;
    int n, a[MAXN];
    cin >> n;
    rep(i,0,n) cin >> a[i];
    int start=-1, end=-1;
    bool decreasing = false;
    rep(i,1,n) {
        if(a[i] - a[i-1] < 0) {
            if(decreasing) {
                cout << "no\n";
                return 0;
            }
            if(start == -1) {
                start = i - 1;
            }
            end = i;
        }
        else if(start != -1 && decreasing == false) {
            decreasing = true;
        }
    }
    if(start == -1) {
        cout << "yes\n1 1";
    }
    else if((start == 0 || a[end] > a[start-1]) &&
       (end == n-1 || a[start] < a[end+1])) {
        cout << "yes\n" << start+1 << ' ' << end+1;
    }
    else cout << "no\n";
}