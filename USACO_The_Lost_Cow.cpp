#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int number(int x , int y){
    int init = 1 ;
    while (true){
        if (x+init>=y){
            break;
        }
        else{
            init = init*4;
        }
    }
    return init;
}
int number2(int x , int y){
    int init = 2 ;
    while (true){
        if (x-init<=y){
            break;
        }
        else{
            init = init*4;
        }
    }
    return init;
}
int main(){
    int distance = 1 ;

    freopen(("lostcow.in"),"r",stdin);
    freopen(("lostcow.out"),"w",stdout);
    int init = 1;
    int mainit = 0;
    int n = 0;
    int a,b;
    cin >> a >>b ;
    if (a>b){
        mainit = number2(a,b);
        n = ceil(log(mainit)/log(2));
        distance = abs(1-pow(2,n))+abs(1-pow(2,n+1))+abs(a-b);//still need to work on the difference for better understanding
        //if (a-mainit <= -b){
            //distance = distance - abs((mainit-a)-b);
    //}
    }
    else{
        mainit = number(a,b);
        n = ceil(log(mainit)/log(2));
        distance = abs(1-pow(2,n))+abs(1-pow(2,n+1));
        if (mainit+a > b){
            distance = distance - abs((mainit+a)-b);
    }
    }

    cout <<  distancen;
    




}
