#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rep1(i,a,b) for(int i=a; i<=b; ++i)
#define hyper ios::sync_with_stdio(0); cin.tie(0)
#define pii pair<int, int>
#define pb push_back
#define F first
#define S second
#define INF 0x3f3f3f3f
using namespace std;

const int MAXN = 1e5+5;
int n, m, x, y, ans=0;
bool cat[MAXN], vis[MAXN];
vector<int> edge[MAXN];

void DFS(int x, int cnt) {
    if(vis[x]) return;
    cnt = cat[x] ? cnt+1 : 0;
    if(cnt > m) return;
    if(x!=1 && edge[x].size()==1) {
        ans++;
        return;
    }
    vis[x] = true;
    for(auto e: edge[x]) DFS(e, cnt);
}

signed main() {
    hyper;
    cin >> n >> m;
    rep1(i,1,n) cin >> cat[i];
    rep(i,0,n-1) {
        cin >> x >> y;
        edge[x].pb(y);
        edge[y].pb(x);
    }
    DFS(1, 0);
    cout << ans;
}