#include <bits/stdc++.h>
using namespace std;
int n, m;   
vector<int> grafo[110000];
bool cats[110000];
int res = 0;
 
void dfs(int v, int pai ,int k){
    if(k > m) return;
    if(grafo[v].size() == 1 && grafo[v][0] == pai){
        res++;
        return;
    }
    
    for(int i = 0; i < grafo[v].size(); i++){ 
        if(grafo[v][i] != pai){
            if(cats[grafo[v][i]])   dfs(grafo[v][i], v, k+1);
            else   dfs(grafo[v][i], v, 0);
        
        }
            
    }
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        bool aux;
        cin >> aux;
        cats[i] = aux;
    }
   
    int x, y;  
    for(int i = 0;  i < (n - 1); i++){
        cin >> x >> y;
        grafo[x - 1].push_back(y - 1);
        grafo[y - 1].push_back(x - 1);
    }
    dfs(0, -1, cats[0]);
    cout << res <<"\n";
    return 0;
}

