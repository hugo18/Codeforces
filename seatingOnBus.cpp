#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(4));
	int i = 0, j = 3, cont = 1, k, l;
	
	for(int x = n - 1; x >= 0; x--){
		v[x][i] = cont++;
		v[x][j] = cont++;
	}
	i = 1; 
	j = 2;
	for(int x = n - 1; x >= 0; x--){
		v[x][i] = cont++;
		v[x][j] = cont++;
	}
	i = 1, j = 0, k = 2, l = 3; 
	for(int x = n - 1; x >= 0; x--){
		
		if(v[x][i] <= m)
			cout << v[x][i] << " ";
		if(v[x][j] <= m)
			cout << v[x][j] << " ";
		if(v[x][k] <= m)
			cout << v[x][k] << " ";
		if(v[x][l] <= m)
			cout << v[x][l] << " ";
	}
	cout << "\n";
	return 0;
}
