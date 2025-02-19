#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &it: v) cin >> it;
	
	vector<int> folder;
	int negativos = 0, cont = 0;
	for(auto it: v){
		cont++;
		if(it < 0){
			if(negativos < 2)
				negativos++;
			else{
				cont--;
				folder.push_back(cont);
				negativos = 1;
				cont = 1;
			}
		}
	}
	folder.push_back(cont);
	cout << folder.size() << "\n";
	for(auto it: folder)
		cout << it << " ";
	return 0;
}
