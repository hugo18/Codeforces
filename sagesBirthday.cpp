#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	double aux = n;
	vector<int> v(n);
	for(auto &it: v) cin>>it;
	sort(v.begin(), v.end());
	vector<int> v1(n, 0);
	int i = 0;
	for(int idx = 1; idx < n - 1; idx += 2){
		v1[idx] = v[i++];
	}
	for(int idx = 0; idx < n; idx++){
		if(v1[idx] == 0){
			v1[idx] = v[i++];	
		}
	}
	if(aux >= 2){
		aux -= 2.0;
		cout<<ceil(aux/2.0)<<"\n";
	}else
		cout<<"0\n";
	
	for(auto it: v1)cout<<it<<" ";
	cout << "\n";
	return 0;
}
