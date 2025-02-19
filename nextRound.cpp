#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(auto &it: v) cin >> it;
	int i = k - 1;
	
	while(i < n && v[i] == v[k-1] && v[i] != 0){
		i++;
	}
	int cont = 0;
	for(int j = 0; j < i; j++){
		if(v[j] == 0) break;
		cont++;
	}
	cout << cont << "\n";
	return 0;
}
 
