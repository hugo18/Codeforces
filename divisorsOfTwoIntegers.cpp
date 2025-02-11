#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	multiset<int> m;
	for(int i = 0; i < n; i++){
		int aux;
		cin >> aux;
		m.insert(aux);
	}
	int aux = *prev(m.end());
	for(int i = 1; i <= aux; i++) {
		if(aux % i == 0)
			m.erase(m.find(i));
	}
	cout << aux << " " << *prev(m.end());
	return 0;
}
