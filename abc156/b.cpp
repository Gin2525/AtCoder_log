#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main(){
    // 制約見て！！！デカかったらlong longにすること！
    ll n;
    int k;
    cin >>n>>k;
    int i = 0;
    while(n/k>0){
        n /= k;
        i++;
    }
    if(n!=0){
        i++;
    }
    cout<< i<<endl;
}