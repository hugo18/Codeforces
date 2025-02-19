#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	string s;
	cin >> s;
	bool flag = false;  
	for(auto it: s){
		if(it == 'H' || it == 'Q' || it == '9'){
			flag = true;
			break;
		}
	}
	if(!flag)
		cout << "NO\n";
	else
		cout << "YES\n";
	return 0;
}
