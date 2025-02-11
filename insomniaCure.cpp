#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int k, l, m, n, d, cont = 0;
	cin >> k >> l >> m >> n >> d;
	vector<int> v(d + 1, 0);
	for(int i = k; i <= d; i += k){
		if(v[i] == 0){
			v[i]++;
			cont++;
		}
	}
	for(int i = l; i <= d; i += l){
		if(v[i] == 0){
			v[i]++;
			cont++;
		}	
	}
	for(int i = m; i <= d; i += m){
		if(v[i] == 0){
			v[i]++;
			cont++;
		}	
	}
	for(int i = n; i <= d; i += n){
		if(v[i] == 0){
			v[i]++;
			cont++;
		}	
	}
	cout << cont << "\n";
	return 0;
}

