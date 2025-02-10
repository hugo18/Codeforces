#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a;
	cin>>n>>a;
	vector<int> v(n);
	a--;	
	for(auto &it: v) cin>>it;
	int j = a;
	bool esq;
 
	if(a >= n/2)
		esq = true;
	else
		esq = false;
	int cont = 0;
	if(esq){
		for(int i = a; i >= 0; i--){
			if(j < n && v[i] && v[j]){
				cont += 2;	
			}else if(j >= n && v[i]){
				cont++;
			}
			j++;	
		}
	}else{
		for(int i = a; i < n; i++){
			if(j >= 0 && v[i] && v[j]){
				cont += 2;	
			}else if(j < 0 && v[i]){
				cont++;
			}
			j--;	
		}
	}
	if(v[a]){
		cont--;
	}
	cout<<cont<<"\n";
	return 0;
}
