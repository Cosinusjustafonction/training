#include "bits/stdc++.h"
using namespace std;


    
int main(){
    freopen("diamond.in","r",stdin);
    freopen("diamond.out","w",stdout);
    int N,B;
    cin >> N >> B;
    vector<int> x(N);
    for (int& t:x) cin >> t;
    sort(x.begin(),x.end());
    int max_square = 0 ;
    int mainint = 0;
    for (int i = 0 ; i < N ; i++){
        int mainint = 1;
        for (int j = i+1; j < N ; j++){
            if (abs(x[i]-x[j]) <= B ){
                mainint = mainint + 1 ;
            }
            else{
                break;
            }
        max_square = max(mainint,max_square);
        }
    }
    cout << max_square;


}
