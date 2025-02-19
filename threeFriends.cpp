#include <bits/stdc++.h>
 
using namespace std;
int dif(int a, int b, int c){
	int resultado = 0;
	resultado += (c - a);
	resultado += (c - b);
	resultado += (b - a);
	return resultado;
}
 
int main(){
	int q;
	cin >> q;
	while(q--){
		int a, b, c;
		cin >> a >> b >> c;
		if(b > c)
			swap(b, c);
		if(a > b)
			swap(a, b);
		if(b > c)
			swap(b, c);
		
 
		if(a < b && b < c){
			a++;
			c--;
		}
		else if(a < b && b == c){
			b--;
			c--;
			if(a < b)
				a++;
		}
		else if(a == b && b < c){
			a++;
			b++;
			if(b < c)
				c--;
		}
		
			
		
		cout << dif(a, b, c) << "\n";
	}
	return 0;
}

