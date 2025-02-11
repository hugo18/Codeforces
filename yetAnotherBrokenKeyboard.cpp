#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll; 
 
int main(){
	int n, k;
	cin >> n >> k;	
	string s;
	cin >> s;
	unordered_set<char> aux;
	for(int i = 0; i < k; i++){
		char c;
		cin >> c;
		aux.insert(c);
	}
	ll res = 0LL, ac = 0LL;
	
	for(auto it: s){
		if(aux.find(it) != aux.end())
			ac++;
		else{
			res += ac * (ac + 1)/2;
			ac = 0LL;
		}
		
	}
	res += ac * (ac + 1)/2;
	cout << res << "\n";
	return 0;
}
