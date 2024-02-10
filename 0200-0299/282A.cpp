#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
    hyper;
    int n, x=0;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        if(s[1] == '+') x++;
        else x--;
    }
    cout << x;
}