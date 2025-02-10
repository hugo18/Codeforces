#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	long int T;
	float resp, y, x;	
		
	cin >> T;
	while(T--) {
		scanf("%f%f", &y, &x);
		resp = y/(1.0+x/100.0);
		printf("%.0f\n", resp);
	}
	
		return 0;
}
