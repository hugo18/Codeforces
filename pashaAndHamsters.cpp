#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a, b;
	cin >> n >> a >> b;
	vector<int> v(n + 1);
	vector<int> va(a), vb(b);
	for(auto &it: va) cin >> it;
	for(auto &it: vb) cin >> it;
	if(a <= b){
		for(int i = 0; i < a; i++){
			if(v[va[i]] == 0)
				v[va[i]] = 1;
		}
		for(int i = 0; i < b; i++){
			if(v[vb[i]] == 0)
				v[vb[i]] = 2;
		}
	}else{
		for(int i = 0; i < b; i++){
			if(v[vb[i]] == 0)
				v[vb[i]] = 2;
		}
		for(int i = 0; i < a; i++){
			if(v[va[i]] == 0)
				v[va[i]] = 1;
		}
	}
	for(int i = 1; i <= n; i++) cout<<v[i]<<" ";
	cout<<"\n";
	return 0;
}
