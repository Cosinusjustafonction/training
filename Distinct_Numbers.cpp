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
 
int main(){
    setIO();
    int a  ;
    cin >> a ; 
    vector<int> x(a) ; 
    for (int i = 0 ; i < a ; i++){
        cin >> x[i] ;
    }
    sort(x.begin(),x.end());
    int final = 0 ;
    for (int i = 0 ; i < a ; i++){
        if (x[i] != x[i+1]){
            final++;
        }
    }
    cout << final << "\n";
    
}
