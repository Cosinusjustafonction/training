#include <bits/stdc++.h>
using namespace std;




int main(){
    freopen("pails.in","r",stdin);
    freopen("pails.out","w",stdout);
    int a,b,c,t=0;
    cin >> a >> b >> c ;
    for (int i = 0 ; i < 1001;i++){
        for (int j = 0 ; j < 1001;j++){
            int number = a*i + b*j ;
            if (number > c){
                break;
            }
            t = max(number,t);
        }
    }
    cout << t;

}
