#include <bits/stdc++.h>
using namespace std;
 
struct rect{
    long long x1 ,y1 ,x2 ,y2;
    long long size(){return (x2-x1)*(y2-y1);}
};
 
long long intersect(rect p, rect t){
    long long overlapx = max(0ll,min(p.x2,t.x2)-max(p.x1,t.x1));
    long long overlapy = max(0ll,min(p.y2,t.y2)-max(p.y1,t.y1));
    return overlapx*overlapy;
}
 
rect pointsi(rect a , rect b){
	rect point;
    point.x1 = max(a.x1,b.x1);
    point.y1 = max(a.y1,b.y1);
    point.x2 = min(a.x2,b.x2);
    point.y2 = min(a.y2,b.y2);
    return point;
}
 
int main(){
    
    rect a, b, c;
    cin >>a.x1>>a.y1>>a.x2>>a.y2;
    cin >>b.x1>>b.y1>>b.x2>>b.y2;
    cin >>c.x1>>c.y1>>c.x2>>c.y2;
    long long  initial_size = a.size();
    if (initial_size <= intersect(a,b)+intersect(a,c)-intersect(a,pointsi(b,c))){
        cout << "NO"<<endl;
    }
    else {
        cout << "YES"<<endl;
    }
    
 
}
