#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> v(5);
	int soma = 0;
	for(int i = 0; i < 5; i++){
		cin >> v[i];
		soma += v[i];
	}
	sort(v.begin(), v.end());
	int maximo = 0;
	for(int i = 1; i < 4; i++){
		if(v[i - 1] == v[i])
			maximo = max(maximo, v[i] * 2);
		if(v[i] == v[i + 1])
			maximo = max(maximo, v[i] * 2);
		if(v[i-1] == v[i] && v[i] == v[i + 1])
			maximo = max(maximo, v[i] * 3);
	}
	cout << soma - maximo << "\n";
	return 0;
}
