#include <bits/stdc++.h>
using namespace std;
struct bucket{
    int capacity , milk ;

};
void permutation(bucket &a , bucket &b) {
    vector<int> t ;
    if (a.milk + b.milk > b.capacity){
        a.milk  = abs(b.capacity - (a.milk+b.milk));
        b.milk = b.capacity;
    }
    else {
        b.milk = a.milk + b.milk;
        a.milk = 0;
    }
   
}

int main(){
    vector<int> t ;
    int pours ;
    freopen(("mixmilk.in"),"r",stdin);
    freopen(("mixmilk.out"),"w",stdout); 
    bucket a,b,c;
    cin >> a.capacity >> a.milk ;
    cin >> b.capacity >> b.milk ;
    cin >> c.capacity >> c.milk ;
    while (pours < 100){
        if (pours == 100){
            break;
        }
        permutation(a,b);
        pours +=1;
        if (pours == 100){
            break;
        }
        permutation(b,c);
        pours +=1;
        if (pours == 100){
            break;
        }
        permutation(c,a);
        pours +=1;
    }
    cout << a.milk << endl;
    cout << b.milk << endl;
    cout << c.milk << endl;


}
