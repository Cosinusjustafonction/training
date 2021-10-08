#include "bits/stdc++.h"
using ll = long long;
using namespace std;

int n ; ll apples[20] ;//max = n
ll solve(int i , ll sum1 , ll sum2){
    if (i == n){
        return abs(sum1 - sum2);
    }
    return min(solve(i+1,sum1+apples[i],sum2),solve(i+1,sum1,sum2 + apples[i]));
}

int main(){
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        cin >> apples[i] ;
    }
    cout<< solve(0,0,0);
}
