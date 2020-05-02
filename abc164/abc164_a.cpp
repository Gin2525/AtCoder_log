#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main(){
    int s,w;
    cin >> s>>w;
    if(w>=s){
        cout << "unsafe"<< endl;
    }else{
        cout << "safe" << endl;
    }
    return 0;
}