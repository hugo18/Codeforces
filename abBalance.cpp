#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int ab=0, ba=0;
        for(int i = 0; i < n - 1; i++){
            if(s[i] == 'a' && s[i+1] == 'b') ab++;
            else if(s[i]=='b' && s[i+1]=='a') ba++; 
        }
        if(ab < ba){
            s[0] = 'a';
        }else if(ab > ba){
            s[0] = 'b';
        }
        cout << s << "\n";
    }
	return 0;
}
