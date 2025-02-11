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
		int ant, maior = 0, idx = -1;
		cin >> v[0];
		maior = max(maior, v[0]);
		ant = v[0];   
		for(int i = 1; i < n; i++){
			cin >> v[i];
			if(v[i] != ant) flag = true;
			maior = max(maior, v[i]);
			
		}
		if(!flag) cout << "-1\n";
		else{
			for(int i = 0; i < n; i++){
				if(i < n - 1 && v[i] == maior && v[i + 1] != maior){ 
					idx = i + 1;
					break;
				}
				else if(i > 0 && v[i] == maior && v[i - 1] != maior){
					idx = i + 1;
					break;
				}
			}
			cout<<idx<<"\n";
		}
	}
	return 0;
}
