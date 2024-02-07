#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define int long long
#define hyper ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

bool prime[1001] = {0};
vector<int> vp;

void genPrime() {
    prime[2] = 1;
    vp.push_back(2);
    rep(i,3,1001) {
        prime[i] = 1;
        for(auto p: vp) {
            if(i%p == 0) {
                prime[i] = 0;
                break;
            }
        }
        if(prime[i]) vp.push_back(i);
    }
}

bool isPrime(int n) {
    if(n <= 1000) return prime[n];
    bool ans = 1;
    for(auto p: vp) {
        if(n%p == 0) {
            ans = 0;
            break;
        }
    }
    return ans;
}

signed main() {
    hyper;
    genPrime();
    int n, t;
    cin >> n;
    while(n--) {
        cin >> t;
        int sq = sqrt(t);
        if(sq*sq == t && isPrime(sq)) cout << "YES\n";
        else cout << "NO\n";
    }
}