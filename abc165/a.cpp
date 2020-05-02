#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main(){
    int k,A,B;
    cin >> k >> A >> B;
    for(int i = A; i <=B  ; i++){
        if(i%k==0){
            cout << "OK" << endl;
            return 0;
        }
    }
    cout << "NG" << endl;
}