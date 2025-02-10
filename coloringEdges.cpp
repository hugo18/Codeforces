#include <bits/stdc++.h>
using namespace std;
 
using pi = pair<int, int>;
bool flag = false;
vector<pi> grafo[5010];
int arestas[5010];
int pilha[5010];
 
void dfs(int i){
	pilha[i] = 1;
	for(auto it: grafo[i]){
		if(pilha[it.first] == 0){
			dfs(it.first);
			arestas[it.second] = 1; 
		}else if(pilha[it.first] == 2)
			arestas[it.second] = 1; 
		else{
			arestas[it.second] = 2;
			flag = true;
		}
	}
 
	pilha[i] = 2; 
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		grafo[u].push_back({v, i});
	}
	
	for(int i = 0; i < n; i++){
		if(pilha[i] == 0)
			dfs(i);
	}
	if(flag) cout<<"2\n";
	else  cout << "1\n";
	for(int i = 0; i < m; i++)
		cout<<arestas[i]<<" ";
	cout << "\n";
	return 0;
}
