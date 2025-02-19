#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int v = 0, c = 0;
	vector<int> aux(n);
	for(auto &it: aux) cin >> it;
	bool flag = true;
	for(auto it: aux){
		if(it == 25)
			v++;
		else if(it == 50){
			if(v == 0){	
				flag = false;
				break;
			}else{
				v--;
				c++;
			}
		}
		else{
			if(v != 0 && c != 0){
				c--;
				v--;
			}else if(v == 0){
				flag = false;
				break;
			}else if(c == 0){
				if(v < 3){
					flag = false;
					break;
				}else
					v -= 3;
			}
		}
	}	
	if(flag)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
