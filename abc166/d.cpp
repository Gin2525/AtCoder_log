#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main(){
    // 制約見て！！！デカかったらlong longにすること！
    ll x;
    cin >> x;
    int a=0;
    while(x>a*a*a*a*a){
        a++;
    }
    int b=a;
    while(x!=a*a*a*a*a-b*b*b*b*b){
        b--;
    }
    cout << a << " " <<b<<endl;
}