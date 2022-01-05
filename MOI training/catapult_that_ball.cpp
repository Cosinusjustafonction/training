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
    int maxn = 50000 ; 
    int log[maxn +1] ;
    log[1] = 0 ; 
    for( int i = 2 ; i <= maxn ; i++){
        log[i] = log[i/2] + 1 ;
    } 
    int a , b ; 
    cin >> a >> b ;
    vector<int> X(a) ; 
    for(int& t:X) cin >> t ;
    int k = 30 ; 
    vector<vector<int>> st(maxn , vector<int> (k+1)) ;
    for (int i = 0 ; i  < a ; i++){
        st[i][0] = X[i] ;
    }

    for (int j = 1 ; j <= k ; j++){
        for (int i = 0 ; i + (1 << j) <= a ; i++){
            st[i][j] = max(st[i][j-1] , st[i+ (1 << (j-1))][j-1]) ;
        }
    }
    int ans = 0 ; 
    for (int i = 0 ; i < b ; i++){
        int l , r ; 
        cin >> l >> r   ; 
        l-- , r-=2 ;
        if (l == r){
            ans++ ;
            continue;
        }
        int j = log[r-l+1] ; 
        int maximum = max(st[l][j],st[r- (1<<j) + 1][j]) ;
        if (maximum == X[l] ){
            ans++ ;
        }
    }
    cout << ans << "\n" ;


} 
