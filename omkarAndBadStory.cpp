#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n, cont = 0;
		bool flag = false;  
		cin >> n;
		vector<int> v(n);
		unordered_set<int> s;
		int maxElem = 0;
		int numZeros = 0;
		for(auto &it: v){
			cin >> it;
			if(it < 0) flag = true;
			else if(it == 0) numZeros++;
			cont += it;
			s.insert(it);
			maxElem = max(maxElem, it);
		}
		if(flag)
			cout << "NO\n";
		else{
			int maior = 1;
			for(int i = 2; i <= 100; i++){
				bool flag1 = true;
				for(int j = 0; j < n; j++){
					if(v[j] % i != 0){
						flag1 = false;
						break;
					}
				}
				if(flag1)
					maior = max(maior, i);
			}
			cout << "YES\n";
			cout << numZeros + (maxElem/maior) << "\n";
			for(int i = 0; i < n; i++){
				cout << v[i] << " ";
			}
			for(int i = maior; i <= maxElem; i += maior){
				if(s.find(i) == s.end()){
					cout << i << " ";
				}
			}
			cout << "\n";
		}
	}
 
	return 0;
}
