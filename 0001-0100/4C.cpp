#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define int long long
using namespace std;

struct htItem {
    string s;
    int cnt = 0;
};
vector<htItem> ht[10000];
hash<string> hasher;

int find(string str) {
    int h = hasher(str) % 10000;
    for(auto& item: ht[h]) {
        if(item.s == str) {
            item.cnt++;
            return item.cnt - 1;
        }
    }
    return 0;
}

void insert(string str) {
    int h = hasher(str) % 10000;
    htItem item = {str, 1};
    ht[h].push_back(item);
}

signed main() {
    hyper;
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        int cnt = find(s);
        if(cnt) {
            cout << s << cnt << '\n';
        } else {
            insert(s);
            cout << "OK\n";
        }
    }
}
