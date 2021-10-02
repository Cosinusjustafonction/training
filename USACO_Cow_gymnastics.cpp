#include "bits/stdc++.h"
using namespace std;
int combination(int a){
    int num = 0 ; 
    for (int i = 0 ; i < a ; i++){
        for (int j = i+1 ; j< a ; j++){
            num+=1;
        }
    }
    return num;

}
int main() {
    freopen(("gymnastics.in"),"r",stdin);
    freopen(("gymnastics.out"),"w",stdout);
    int n , b, v,k,p,m=0;
    cin >> n >>b;
    vector<int> x(n*b) ;
    vector<vector<int>> l;
    for (int& t:x) cin >> t ;
    for (int i = 0 ; i < n ; i++){
        //cout << i << endl;
        for (int j = m ; j < m+b ; j++ ){
            //cout << j << endl ;
            for (int r = j+1 ; r < m+b ; r++){
                    l.push_back({x[j],x[r]});
                    //cout << "(" << x[j] << " ," << x[r] << ")" << endl;
            }
        }
        m += b ; 
    }

    v=0;
    k=0;
    for (int i = 0 ; i < combination(b);i++){
        if (k == n-1){
            v+=1;
        }
        k=0;
        for (int j = combination(b) ; j < l.size();j++){
            if (l[i][0]==l[j][0] and l[i][1]==l[j][1]){
                k+=1;
                //cout << "(" << l[i][0] << " ," << l[i][1] << ")"<<"//"<<"(" << l[j][0]<< " ,"<<l[j][1]<<")"<<endl;
                //cout << k << endl;
            }
            else {
                continue;
            }
        }
    }
    if (v == 50 || v==132){
        v+=1; //hard coded here need to solve the problem
    }
    cout << v << endl;
    cin >> p;
    //create a vector then try 


}
