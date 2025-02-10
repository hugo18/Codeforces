#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int T, n, aux, num = 0;
	float m, k;
	cin >> T;
	while(T--) {
		cin >> n >> m;
		k = ceil(float(n)*m);
		for(int i=0;i<n;i++) {
			scanf("%d", &aux);
			if(aux >= 50)
				num++;
		}
		if(num >= k)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		
		num = 0;	
	}
 
		return 0;
}
