#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n ;
    map<string, int> n1, n2;
    vector<pair<string, int>> rounds(n);
    set<string> nomes;
    for(int i=0; i < n; i++){
        string s;
        int cont;
        cin >> s >> cont;
        rounds[i] = {s, cont};
        n1[s] += cont; 
    }
    int maior = -1; 
    for(auto it: n1){
            if(it.second > maior)
                maior = it.second;
    }
      for(auto it: n1){
            if(it.second == maior)
              nomes.insert(it.first);
    }
  
    string vencedor = "";
    for(auto it: rounds){
        n2[it.first] += it.second;
        if(n2[it.first] >= maior && nomes.find(it.first) != nomes.end()){
            vencedor = it.first;
            break;
        }
            
    }
    cout << vencedor << "\n";
    
    return 0;
}
