#include <bits/stdc++.h>
using namespace std;
 
int bfs(int s, int e, int n, vector<vector<int>>& g){
	vector<int> dist(n, -1);
	queue<int> q;
	q.push(s);
	dist[s] = 0;
	
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(auto it: g[v]){
			if(dist[it] == -1){
				q.push(it);
				dist[it] = dist[v] + 1;
			}
		}
	}
	return dist[e];
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n, s, e;
		cin >> n >> s >> e;
		s--;
		e--;
		vector<string> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		map<int, int> m[n];
		for(int i = 0; i < n; i++){
			for(auto it: v[i]){
				m[i][it - '0']++;
			}
		}
		vector<vector<int>> g(n);
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n;j++){
				int cont = 0;
				for(int k = 0; k < 10; k++){
					cont += min(m[i][k], m[j][k]);
				}
				if(cont == 17){
					g[i].push_back(j);
					g[j].push_back(i);
				}
			}
		}
		int res = bfs(s, e, n, g);
		cout<<res<<"\n";
	}	
	return 0;
}
