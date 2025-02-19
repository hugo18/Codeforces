#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &it: v) cin >> it; 
	vector<int> v1(n - 1);
	for(auto &it: v1) cin >> it; 
	vector<int> v2(n - 2);
	for(auto &it: v2) cin >> it; 
	sort(v.begin(), v.end());
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	int j = 0;
	bool flag = false;
	for(int i = 0; i < n - 1; i++){
		if(v[i] != v1[j++]){
			cout<<v[i]<<"\n";
			flag = true;
			break;
		}
	}
	if(!flag)
		cout << v[n - 1] << "\n";
	j = 0;
	flag = false;
	for(int i = 0; i < n - 2; i++){
		if(v1[i] != v2[j++]){
			cout<<v1[i]<<"\n";
			flag = true;
			break;
		}
	}
	if(!flag)
		cout << v1[n - 2] << "\n";
	return 0;
}
 
