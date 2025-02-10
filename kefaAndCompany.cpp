#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi;
 
bool c(const pi &a, const pi &b){
       if(a.first < b.first) return true;
       else if(a.first > b.first ) return false;
       else{
           if(a.second > b.second) return true;
           else return false; 
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll d;
    cin >> n >> d;
    vector<pi> f(n);
    for(auto &it: f){
        cin >> it.first;
        cin >> it.second;
    }
    sort(f.begin(), f.end(), c);
    int p1 = 0, p2 = 1;
    ll cont = f[p1].second, maximo = cont;
    while(p1<n && p2 < n){
        if(p1 < n && p2 < n && f[p2].first - f[p1].first < d){
            cont += f[p2].second;
            maximo = max(maximo, cont);
            p2++;
        }
        else if(p1 < n && p2 < n && f[p2].first - f[p1].first >= d ){
            cont -= f[p1].second;
            p1++;
            
        }
        
    }
    cout<<maximo<<"\n";
    
    return 0;
}
