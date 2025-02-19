#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int n, m;
	cin >> n >> m;
	vector<int> v(m);
	for(auto &it: v) cin >> it;
	sort(v.begin(), v.end());
	int aux = m - n;
	int resultado = 1e9;
	int j = m - 1;
	for(int i = aux; i >=0; i--){
		resultado = min(resultado, v[j] - v[i]);
		j--;
	}
	cout << resultado << "\n";
	return 0;
}
