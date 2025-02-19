#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(auto &it: v) cin >> it;
	int soma = 0;
	
	for(int i = 0; i < k; i++)
		soma += v[i];
	
 	int minimo = soma, pos = 1;
 	int i = 0, j = k;  
	while(j < n){
		soma -= v[i++];
		soma += v[j++];
		if(soma < minimo){
			minimo = soma;
			pos = i + 1;
		}
	}
	cout << pos << "\n";
	return 0;
}
