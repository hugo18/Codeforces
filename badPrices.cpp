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
		for(auto &it: v) cin >> it;
		int minimo = v[n - 1], cont = 0;
		for(int i = n - 2; i >= 0; i--){
			if(v[i] > minimo)
				cont++;
			else
				minimo = v[i];
		}
		cout << cont << "\n";
	}
	return 0;
}
