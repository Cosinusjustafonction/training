#include <bits/stdc++.h>
using namespace std;


int main(){
    string final_string ;
    string main_string;
    int a , b , c ;
    freopen(("cowsignal.in"),"r",stdin);
    freopen(("cowsignal.out"),"w",stdout);
    cin >> a >> b >> c ; 
    for (int i = 0 ; i < a ; i++){
        cin >> main_string;
        for (int l = 0 ; l < c ; l++){
            for (int j = 0 ; j < b ; j++){
                for ( int k = 0 ; k < c ; k++){
                    final_string += main_string[j];
                }
            }
            final_string += "\n";
        }
    }
    cout << final_string ;


}
