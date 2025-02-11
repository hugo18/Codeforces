#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		int aux = n;
		for(int i = n * 4; i > 0 && aux > 0; i-=2){
			cout<<i<<" ";			
			aux--;
		}
		cout << "\n";
	}
	return 0;
}
