#include "bits/stdc++.h"
using namespace std;
int main() {
    freopen(("gymnastics.in"),"r",stdin);
    freopen(("gymnastics.out"),"w",stdout);
    int n , b, v,k,p,m=0;
    cin >> n >>b;
    vector<int> x(n*b) ;
    vector<vector<int>> l;
    for (int& t:x) cin >> t ;
    for (int i = 0 ; i < n ; i++){
        for (int j = m ; j < m+b ; j++ ){
            for (int r = j+1 ; r < m+b ; r++){
                    l.push_back({x[j],x[r]});
            }
        }
        m += b ; 
    }
    v=0;
    k=0;
    for (int i = 0 ; i < l.size();i++){
        for (int j = i+1 ; j < l.size();j++){
            if (l[i]==l[j]){
                k+=1;
            }
            else {
                continue;
            }
        }
        if (k == n-1){
            v+=1;
        }
        k=0;
    }
    cout << v << endl;
    cin >> p;



}
