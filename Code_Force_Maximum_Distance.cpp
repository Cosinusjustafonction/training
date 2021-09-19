#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin >> n;
    vector<int> x(n),y(n) ;
    for (int& t:x) cin >> t;
    for (int& t:y) cin >> t;  
    int max_square = 0 ;  
    for (int i=0 ; i<n ; i++){
        for (int j=i+1 ; j<n ; j++){
            int dx = x[i]-x[j];
            int dy = y[i]-y[j];
            int square = dx*dx +dy*dy;
            max_square = max(max_square,square);
        }
    }
    cout << max_square;
 
 
 
 
}
