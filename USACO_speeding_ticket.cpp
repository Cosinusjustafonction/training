#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> firstarr = {};
    vector<int> secondarr = {};
    vector<int> lastarr = {};
    int len = 100;
    freopen(("speeding.in"),"r",stdin);
    freopen(("speeding.out"),"w",stdout);
    int m,n,a,b;
    cin >> m >> n ;
    for (int i =0;i < m;i++){
        cin >> a >> b ;
        for (int j = 0 ; j < a ; j++){
            firstarr.push_back(b);
        }
    }
    for (int i = 0; i < n ; i ++){
        cin >> a >> b ; 
        for (int j = 0 ; j < a ; j ++){
            secondarr.push_back(b);
        }
    }
    for (int i ; i < 100; i++){
        if (secondarr[i]-firstarr[i] < 0){
            lastarr.push_back(0);
        }
        else{
            lastarr.push_back(secondarr[i]-firstarr[i]);
        }
    }
    cout << *max_element(begin(lastarr), end(lastarr)) ;

}
