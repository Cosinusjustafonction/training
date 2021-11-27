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
    int a ;
    cin >> a ;
    int c , m ,x ;
    for (int i = 0 ; i < a ; i++){
        cin >> c >> m >> x ; 
        if ((c+m+x) / 3 <= min(c,m)){
            cout << (c+m+x) / 3 << "\n" ;
        }
        else{
            cout << min(c,m) << "\n";
        }
    }
    
        
    
}
