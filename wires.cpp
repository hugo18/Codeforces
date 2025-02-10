#include <bits/stdc++.h>
    using namespace std;
    using pi = pair<int, int>;
     
    void dfs(int o, map<int, vector<pi>> &g, map<int, int> &v, int &m, int &me, bool &loop, int pai, int &aresta){
    	v[o] = 1;	
    	for(int i = 0; i < (int)g[o].size(); i++){
    		if(v[g[o][i].first] == 0){
    			if((int)g[g[o][i].first].size() < m){
    				m = (int)g[g[o][i].first].size();
    				me = g[o][i].first;
    			}
    			dfs(g[o][i].first, g, v, m, me, loop, o, aresta);
    		}else if(v[g[o][i].first] == 1 && pai != g[o][i].first){
    			m = -1;
    			me = o;
    			loop = true;
    			aresta = i; 
    		}
    	}
    }
     
    int main(){
    	ios::sync_with_stdio(0);
    	cin.tie(0);
    	int t;
    	cin >> t;
     
    	while(t--){
    		map<int, vector<pi>> grafo;
    		int n;
    		cin >> n;
    		for(int i=1; i <= n; i++){
    			int x, y;
    			cin >> x >> y;
    			grafo[x].push_back({y, i});
    			grafo[y].push_back({x, i});
    		}
    		int cont = 0, menor, menorElem, aresta;
    		map<int, int> visited;
    		bool flag = false, loop;
    		int aux;
    		vector <pair<pair<int, int>, int>> menores;
    		
    		for(auto it: grafo){
    			loop = false;
    			aresta = -1;
    			if(visited[(int)it.first] == 0 && flag){
    				menor = (int)(it.second.size());
    				menorElem = (int)it.first;
    				dfs(it.first, grafo, visited, menor, menorElem, loop,-1, aresta);
    				if(menor > 0 || loop){
    					menores.push_back({{menorElem, loop}, aresta});
    					cont++;
    				}
    			}else if(visited[(int)it.first] == 0 && !flag){
    				menor = (int)it.second.size();
    				menorElem = (int)it.first;
    				dfs(it.first, grafo, visited, menor, menorElem, loop, -1, aresta);
    				flag = true;
    				aux = menorElem;
    			}
    		}
     
    		cout << cont << "\n";
    		if(cont > 0){
    			for(auto it: menores){
    				if(!it.first.second)
    					cout << grafo[it.first.first].begin()->second << " " << it.first.first << " " << aux << "\n";
    				else{
    					cout << grafo[it.first.first][it.second].second << " " << it.first.first << " " << aux << "\n";	
    				}
    			}
    		}
    	}
    	
    	return 0;
    }

