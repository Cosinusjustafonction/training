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
    cin >> a;
    vector<int> X(a) ;
    for (int& t:X) cin >> t ;
    sort(X.begin(),X.end()); //1, 2, 10, 12, 15, 17
    int f = 0 ;  
    for (int i = 0 ; i < a ; i++){
        int target = X[i] +5 ;
        //cout << target << "\n";
        int r = a-1 ; 
        int l = 0 ;
        int m;
        while (l < r){
            int m = (l+r) / 2 +1;
            if (X[m] > target){
                r = m - 1; 
            }
            else{
                l = m ;
            }
        }
        f = max(f , l-i+1);

    } 
    cout << f << "\n" ;
    
    
    
        
    
}
