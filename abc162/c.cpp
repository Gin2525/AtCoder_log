#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int gcd(int x,int y){
    int amari;
    while(x % y !=0){
        amari = x%y;
        x = y;
        y = amari;
    }
    return y;
}

int gcd(int a,int b, int c){
    return gcd(a,gcd(c,b));
}

int main(){
    // 制約見て！！！デカかったらlong longにすること！
    int k;
    ll ans=0;
    cin >> k;
    rep(a,k){
        rep(b,k){
            rep(c,k){
                ans += gcd(a+1,b+1,c+1);
            }
        }
    }

    cout << ans <<  endl;
}