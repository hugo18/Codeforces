#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n == 2){
			cout<<"2\n";
			cout<<"2 1\n";
		}else{
			cout<<"2\n";
			cout<< n <<" "<<n - 2<<"\n";
			cout<< n-1<<" "<<n - 1<<"\n";
 
			for(int i = n - 1; i >= 3; i--){
				cout<<i<<" "<< i-2 << "\n";
			}
		}
	}
	return 0;
}
