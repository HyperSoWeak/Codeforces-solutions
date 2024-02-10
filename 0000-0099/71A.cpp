#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
    hyper;
    int n;
    string s;
    cin >> n;
    while(n--) {
        cin >> s;
        int len = s.length();
        if(len > 10) cout << s[0] << len-2 << s[len-1] << '\n';
        else cout << s << '\n';
    }
}