#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main(){
    // 制約見て！！！デカかったらlong longにすること！
    ll n;
    cin >>n;
    ll sum =0;
    rep(i,n+1){
        if(i%3!=0 && i%5!=0){
            sum += i;
        }
    }
    cout << sum <<endl;
}