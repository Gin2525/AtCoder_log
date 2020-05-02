#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main(){
    long long x;
    cin >> x;
    long long i =0;
    long long n = 100;
    while(true){
        if(n>=x){
            cout << i << endl;
            return 0;
        }
        i++;
        n = n*1.01;
    }
}