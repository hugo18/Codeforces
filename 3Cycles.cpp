#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int lado = n/2;
	
	if(n & 1){
		lado++;
	}
	cout << (n/2) * lado << "\n";
	for(int i = 1; i <= lado; i++){
		for(int j = lado + 1; j <= n; j++){
			cout<<i<<" "<<j<<"\n";
		}
	}
	
	return 0;
}
