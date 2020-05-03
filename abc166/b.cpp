#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main(){
    // 制約見て！！！デカかったらlong longにすること！
    int n,k;
    cin >> n>>k;
    int sunukes[n];
    rep(i,n){
        sunukes[i]=0;
    }
    rep(i,k){
        int d;
        cin >> d;
        rep(j,d){
            int tmp;
            cin >> tmp;
            sunukes[tmp-1]++;
        }
    }
    int ans = 0;
    rep(i,n){
        if(sunukes[i] ==0){
            ans++;
        }
    }
    cout << ans << endl;
}