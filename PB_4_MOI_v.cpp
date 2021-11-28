#include <bits/stdc++.h>
using namespace std;
 
 
void setIO(string name=""){
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (name.size()!=0){
        freopen((name+".in").c_str(),"r",stdin);
        freopen((name+".out").c_str(),"w",stdout);
    }
}
 
string verify(string a , int l , int r){
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
    vector<int> manquant ;
    for (int i = l ; i < r ; i++){
        if (a[i] == '?'){
            manquant.push_back(i);
        }
        else{
            continue;
        }
    }
    for (int i = l ; i < r ; i++){
        for (int j = 0 ; j < 26 ; j++){
            if (a[i] == alphabet[j]){
                alphabet.erase(alphabet.begin()+j);
            }
        }
    }
    if (alphabet.size() != manquant.size()){
        return "-1";
    }
    //cout << l << endl ;
    for (int i = 0 ; i < manquant.size(); i++){
        int current = manquant[i] ;
        a[current] = alphabet[i] ;
    }
    return a ;
 
}
 
int main(){
    setIO();
    string a ; 
    cin >> a ;
    unordered_set<char> s ;
    string m = "-1";
    int l = 0 ; 
    int r = 26 ;
    if (a.size() < 26){
        cout << -1 << "\n" ; 
        return 0;
    }
    while(r <= a.size()){
        m = verify(a , l ,r);
        if (m != "-1"){
            break ;
        }
        r++;
        l++;
    }
    if (m == "-1"){
        cout << m << "\n";
        return 0 ;
    }
    for (int i = 0 ; i < m.size() ; i++){
        if (m[i] == '?'){
            cout << "A" ;
        }
        else{
            cout << m[i] ;
        }
    } 
 
    
    
}
