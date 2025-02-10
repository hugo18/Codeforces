#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 2*1e5+10;
set<int> adj[MAXN], mark;
int vis[MAXN], n;
 
int dfs(int u){
    int last = 0, c = 1;
    while (mark.lower_bound(last+1) != mark.end()){
        last = *mark.lower_bound(last+1);
        if (adj[u].find(last) == adj[u].end()){
            mark.erase(last);
            c += dfs(last);
        }
    }
    return c;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].insert(b);
        adj[b].insert(a);
    }
 
    vector<int> vet;
    for (int i = 1; i <= n; i++)
        mark.insert(i);
    while(!mark.empty()){
        int at=*mark.begin();
        mark.erase(at);
        vet.push_back(dfs(at));
    }
    sort(vet.begin(), vet.end());
    cout << vet.size() << "\n";
    for (int i = 0; i < vet.size(); i++){
        if (i > 0) cout << " ";
        cout << vet[i];
    }
    cout << "\n";
    return 0;
}

