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
		bool flag = false;
		cin >> v[0];
		int ant = v[0];
		for(int i = 1; i < n; i++){
			cin >> v[i];
			if(v[i] != ant) flag = true;
			ant = v[i];
		}
		if(!flag)
			cout << "NO\n";
		else{
			cout<<"YES\n";
			int aux = v[0], aux2;
			vector<int> v2;
			for(int i = 1; i < n; i++){
				if(v[i] != aux){
					cout << "1 " << i+1 << "\n";
					aux2 = i;
				}
				else
					v2.push_back(i);
			}
			for(auto it: v2){
				cout << aux2 + 1 << " " << it + 1 << "\n";
			}
		}
	}
	return 0;
}
