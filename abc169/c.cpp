#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main(){
    // 制約見て！！！デカかったらlong longにすること！
    ll a;
    double b;
    ll b_;
    cin >> a >> b;
    b_ = round(b *100);
    cout << a*b_/100 <<endl;
}