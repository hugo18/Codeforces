#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	if(n <= 2){
		cout << "0\n";
	}else{
		int x = 0, y = 0, xA, yA, xP, yP, cont = 0; 
		
		for(int i = 0; i < n - 1; i++){
			xA = x;
			yA = y;
			
			if(s[i] == 'U')
				y++;
			else
				x++;
			
			if(s[i + 1] == 'U'){
				yP = y + 1;
				xP = x;
			}else{
				yP = y;
				xP = x + 1;
			}
			
			if(x == y)
				if((xA < yA && xP > yP) || (xA > yA && xP < yP))
					cont++;
			
		}
		cout << cont << "\n";
	}
	return 0;
}

