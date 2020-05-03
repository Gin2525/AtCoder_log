#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

std::vector<std::vector<ll>> comb(int n, int r) {
    std::vector<std::vector<ll>> v(n + 1, std::vector<ll>(n + 1, 0));
    for(int i = 0; i < v.size(); i++) {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for(int j = 1; j < v.size(); j++) {
        for(int k = 1; k < j; k++) {
            v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
        }
    }
    return v;
}

int main(){
    // 制約見て！！！デカかったらlong longにすること！
    ll n,a,b;
    cin >> n>>a>>b;
    int ans=0;
    vector<vector<ll>> c =comb(n,n);
    for(int i = 1; i <= n ; i++){
        if(i!=a||i!=b){
            ans += c[n][i];
        }
    }
    cout << ans << endl;
}