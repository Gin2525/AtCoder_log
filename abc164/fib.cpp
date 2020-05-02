#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);++i)
using namespace std;

int fibonacci[44];

int fib(int n){
    if(fibonacci[n]!=0){
        return fibonacci[n];
    }

    if(n==0||n==1){
        fibonacci[n] = 1;
        return 1;
    }

    fibonacci[n] = fib(n-1) + fib(n-2);
    return fibonacci[n];
}

int main(){
    int n;
    cin >> n;
    int result = fib(n); 
    cout << result << endl;
}