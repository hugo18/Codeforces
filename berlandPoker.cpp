#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		int nC = n/k;
		if(m <= nC)
			cout << m << "\n";
		else{
			if((m - nC) % (k - 1) == 0)
				cout << nC - ((m - nC) / (k - 1)) << "\n";
			else
				cout << nC - (((m - nC) / (k - 1)) + 1) << "\n";
				
		}
	}
	return 0;
}
