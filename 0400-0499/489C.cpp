#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define pii pair<int, int>
#define F first
#define S second
#define INF 1e9+7
#define int long long
using namespace std;

string getMax(int m, int s) {
    string ans = "";
    int q=s/9, r=s%9;
    rep(i,0,q) ans += '9';
    if(q == m) return ans;
    ans += r+'0';
    rep(i,0,m-q-1) ans += '0';
    return ans;
}

string getMin(int m, int s) {
    string ans = getMax(m-1, s-1);
    if(s > (m-1)*9) ans += (s-(m-1)*9)+'0';
    else ans += '1';
    reverse(ans.begin(), ans.end());
    return ans;
}

signed main() {
    hyper;
    int m, s;
    cin >> m >> s;
    if(m==1 && s==0) cout << "0 0";
    else if(s==0 || s>m*9) cout << "-1 -1";
    else cout << getMin(m, s) << " " << getMax(m, s);
}