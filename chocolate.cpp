#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &it: v) cin >> it;
	ll cont = 0LL;
	int ant = -1;
	for(int i = 0; i <n; i++){
		if(v[i] == 1){
			if(ant == -1) cont = 1LL;
			else cont *= (ll)(i - ant);
			ant = i;
		}
	}
	cout << cont << "\n";
	return 0;
}
