#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	int n;
	ll x;
	cin >> n >> x;
	getchar();
	int contC = 0;
	for(int i = 0; i < n; i++){
		char c;
		ll num;
		cin >> c >> num;
		getchar();
		if(c == '+')
			x += num;
		else{
			if(num <= x)
				x -= num;
			else
				contC++;
		}
	}
	cout << x << " " << contC << "\n";
	return 0;
}
