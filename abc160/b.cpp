#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main(){
    long long x;
    cin >> x;
    long long sum=0;
    sum += x/500;
    sum *=1000;
    x = x % 500;
    sum += 5*(x/5);
    cout << sum << endl;
}