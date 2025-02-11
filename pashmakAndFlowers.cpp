#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll; 
int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &it: v) cin >> it;
	sort(v.begin(), v.end());
	ll contMax = 0LL, contMin = 0LL, res;
	int minimo = v[0], maximo = v[n - 1];
	for(int i = 0; i < n; i++){
		if(v[i] == minimo) contMin++;
		if(v[n - 1 - i] == maximo) contMax++;
	}
	if(maximo != minimo)
		res = contMax * contMin;
	else
		res = (contMax - 1) * contMax/2;
	cout << maximo - minimo <<" "<< res << "\n";
	return 0;
}
