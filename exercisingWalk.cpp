#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		long long a, b, c, d, x, y, x1, y1, x2, y2;
		cin >> a >> b >> c >> d;
		cin >> x >> y >> x1 >> y1 >> x2 >> y2;
		x = x - a + b;
		y = y - c + d;  
		if(x >= x1 && x <= x2 && y >= y1 && y <= y2 && (x2 > x1 || a + b == 0) && (y2 > y1 || c + d == 0))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
		
	return 0;
}
