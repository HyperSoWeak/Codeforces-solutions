#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define INF 1e9+7
using namespace std;

char invert(char c) {
    int n = c - '0';
    return (9-n) + '0';
}

signed main() {
    hyper;
    string num;
    cin >> num;
    if(num[0] >= '5' && num[0] != '9') {
        num[0] = invert(num[0]);
    }
    rep(i,1,num.length()) {
        if(num[i] >= '5') {
            num[i] = invert(num[i]);
        }
    }
    cout << num;
}