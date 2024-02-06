#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
    hyper;
    int n, a, b, c, cnt=0;
    cin >> n;
    while(n--) {
        cin >> a >> b >> c;
        cnt += (a+b+c >= 2);
    }
    cout << cnt;
}