#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin >> n >> k;
		if((n-1)/2 < k) cout << "-1\n";
		else{
			int aux = (n-1)/2;
			vector<int> v(n, -1);
			int cont = n;
			for(int i = 1; i < n - 1; i += 2){
				if(k == 0) break;
				v[i] = cont--;
				k--;
				
			} 
			for(int i = 0; i < n; i++){
				if(v[i] == -1)
					v[i] = cont--;	
			}	
			for(auto it: v){
				cout << it <<" ";
			}
			cout << "\n";
		}
	}
	return 0;
}
