#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, maior = 0;
	cin >> n;
	vector<int> p(n);
	for(auto &it: p){ 
		cin >> it;
		if(it > maior)
			maior = it; 
	}
	
	int m;
	cin >> m;
	vector<int> d(m);
	for(auto &it: d)
		cin >> it;
	
	
	vector<int> vet(maior+1, 0);
	for(auto it: p){
		vet[it]++;
	}
	for(int i = 1; i < maior + 1; i++){
		vet[i] += vet[i - 1];
	}
	for(auto it: d){
		if(it > maior)
			cout << n << "\n";
		else
			cout<< vet[it] <<"\n";
	}
	return 0;
}
