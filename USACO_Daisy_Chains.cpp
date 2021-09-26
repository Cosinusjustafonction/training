#include "bits/stdc++.h"
using namespace std;
int digit_sum(vector<int> num) {
    int sum = 0;
    for (auto x : num) sum += x;
    return sum;
}

    
int main(){

    int N,p;
    cin >> N ;
    vector<int> x(N);
    for (int& t:x) cin >> t;
    vector<int> lol = x;
    int sum = 0 ;
    for (int i = 0 ; i < N ; i++ ){
        for (int j = 0 ; j < N-i ; j++){
                lol = {x.begin() + i, (x.end())- j};
                sum = digit_sum(lol);
                for (int l = 0 ; l < lol.size(); l++){
                    if (sum%lol.size()!=0){
                        break;
                    }
                    else{
                            if (sum / lol.size() == lol[l] ){
                                    p+=1;
                                    break;
                    }
                    }
                }
        }
    }
    cout << p  << endl;
    //cin >> l ;
}
