#include <bits/stdc++.h>
using namespace std;


void setIO(string name=""){
    ios::sync_with_stdio(0);
    cin.tie(0);
    if (name.size()!=0){
        freopen((name+".in").c_str(),"r",stdin);
        freopen((name+".out").c_str(),"w",stdout);
    }
}




int removed(vector<int> l){
    int final = 0 ;
    //print_vector(l);
    for (int i = 0 ; i < l.size()-2 ; i++){
        int j = i ;
        if (l[i] == l[i+1] && l[i] == l[i+2]){
            int current = i;
            while(l[j] == l[j+1] &&  j < l.size()){
                final++;
                j++;
            }
             l.erase(l.begin()+current,l.begin()+j+1);
            final++;
            break;
            
        }
    }
    //cout << final << endl;
    if (final != 0 && l.size() >= 3){
       final += removed(l)  ;
    }
    return final ;
}

int main(){
    setIO();
    int a , b ,c ; 
    cin >> a >> b >> c ; 
    vector<int> balls(a) ;
    for (int& t:balls) cin >> t ; 
    int final = 0 ; 
    for (int i = 0 ; i < a-1 ; i++){
        vector<int> f = balls ;
        int minifinal = 0 ; 
        if (balls[i] == c && balls[i+1] == c  ) {
            f.insert(f.begin() + i,c);
            //print_vector(f);
            minifinal += removed(f);
        }
        final = max(final , minifinal);
    }
    final-- ; 
    final = max(final , 0);
    
    cout << final  << "\n"; 
    
}
