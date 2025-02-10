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
		if(n == 2){
			cout<<"-1\n";
			continue;
		}else if(n == 1){
			cout<<"1\n";
			continue;
		}
		int c = 0, l = 0, cO = 0;
		int aux = 1;
		vector<vector<int>> matriz(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++){
			l = 0;
			c = cO++;
			for(int j = 0; j < n; j++){
				matriz[l][c] = aux++; 
				c = (c + 1) % n;
				l++;
			}
		}
		for(auto it: matriz){
			for(auto it1: it){
				cout<<it1<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
