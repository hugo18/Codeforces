#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string x, y, z = "";
	cin >> x >> y;
	int s = x.size();
	bool flag = true;
	for(int i = 0; i < s; i++){
		if(x[i] < y[i]){
			flag = false;
			break;
		}else if(x[i] == y[i]){
			z += 'z';
		}else{
			z += y[i];
		}
		
	}
	if(!flag) cout<<"-1\n";
	else
		cout<< z <<"\n";
	return 0;
}
