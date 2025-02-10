#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		if(n == k) cout << "1\n";
		else if(n > k){
			if(n % k == 0)
				k = n;
			else
				k = ((n/k) + 1) * k;	
			
 
			ll resposta = (k/n);
			if(k % n > 0LL)
				resposta++;
			cout<<resposta<<"\n";	
		}else{
			ll resposta = (k/n);
			if(k % n > 0LL)
				resposta++;
			cout<<resposta<<"\n";	
		}
	}
	return 0;
}
