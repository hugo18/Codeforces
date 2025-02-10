#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int T, n, bed = 0, kit = 0, liv = 0;
	string str;
	
	cin >> T;
	while(T--) {
		cin >> n;
		for(int i=0;i<n;i++) {
			cin >> str;
			if(str.rfind("bed", 0) == 0)
				bed++;
			if(str.rfind("kitchen", 0) == 0)
				kit++;
			if(str.rfind("living", 0) == 0)
				liv++;
		}
		bed = int(bed/2);
		printf("%d\n", min(min(bed, kit), liv));
		bed = kit = liv = 0;
	}
 
		return 0;
}
