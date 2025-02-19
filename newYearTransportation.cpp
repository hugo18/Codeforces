#include <bits/stdc++.h>
using namespace std;
bool bfs(vector<vector<int>> &g, int n, int t){
	queue<int> q;
	q.push(0);
	vector<bool> vi(n, false);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		vi[v] = true;
		for(auto it: g[v]){
			if(!vi[it]){
				q.push(it);
			}
		}
	}
	return vi[t];
} 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, t;
	cin >> n >> t;
	vector<vector<int>> g(n);
	for(int i = 0; i < n - 1; i++){
		int aux;
		cin >> aux;
		g[i].push_back(i + aux);
	}
	if(bfs(g, n, t - 1))
		cout << "YES\n";
	else
		cout << "NO\n";	
	return 0;
}
 

