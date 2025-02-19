#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	string s;
	cin >> s;
	int cont = 0;
	bool flag = false;  
	for(auto it: s){
		if(it == '0'){
			if(cont >= 0)
				cont++;
			else
				cont = 1;
		}
		if(it == '1'){
			if(cont <= 0)
				cont--;
			else
				cont = -1;
		}
		if(abs(cont) >= 7)
			flag = true;
	}
	if(!flag)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	
	return 0;
}
