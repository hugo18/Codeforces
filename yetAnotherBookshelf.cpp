#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		while (v.back() == 0) v.pop_back();
		reverse(v.begin(), v.end());
		while (v.back() == 0) v.pop_back();
		cout << count(v.begin(), v.end(), 0) << "\n";
	}
 
	return 0;
}

