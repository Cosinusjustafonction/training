#include "bits/stdc++.h"
using namespace std;

int main(){
    string s ; 
    cin >> s;
    vector<string> permut;
    sort(s.begin(),s.end());
    do{
        permut.push_back(s);
    }
    while (next_permutation(s.begin(),s.end()));
    cout << permut.size() << endl;
    for (string perm : permut){
        cout << perm << endl;
    }

}
