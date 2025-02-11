#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++){
			v[i] = i + 1;
		}
		if(n % 2 != 0){
			for(int i = 0; i < n - 1; i += 2){
				swap(v[i], v[i + 1]);
			}
			swap(v[n - 2], v[n - 1]);
		}else{
			for(int i = 0; i < n; i += 2){
				swap(v[i], v[i + 1]);
			}
		}
		for(auto it: v) cout << it <<" ";
		cout << "\n";
		
	}
	return 0;
}
