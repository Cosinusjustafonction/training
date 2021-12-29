#include <bits/stdc++.h>

using namespace std;
#define ll long long 
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
    int MAXN = 1e5 ;
    int log[MAXN +1] ;
    log[1] = 0 ; 
    for (int i = 2 ; i <= MAXN ; i++){
        log[i] = log[i/2] + 1 ;
    }
    
    int k = 25 ;
    int a ; 
    cin >> a ; 
    vector<int> X(a) ; 
    for(int& t:X) cin >> t ; 
    vector<vector<int>> st(MAXN, vector<int> (k+1)) ;
    for (int i = 0 ; i < a ; i++){
        st[i][0] = X[i] ;
    }
    
    for(int j = 1 ; j <= k ; j++){
        for (int i = 0 ; i + (1 << j) <= a ; i++){
            st[i][j] = min(st[i][j-1] , st[i + (1<< (j-1))][j-1] ) ; 
        }
    }
    int n ; 
    cin >> n ; 
    for (int i = 0 ; i < n ; i++){
        int l ,r ; 
        cin >> l >> r ;
        int j = log[r-l+1] ;
        int minimum = min(st[l][j] , st[r- (1 << j) +1][j]) ; 
        cout << minimum << "\n" ;
    } 
}  
