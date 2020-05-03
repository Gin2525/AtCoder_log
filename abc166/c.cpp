#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    // 制約見て！！！デカかったらlong longにすること！
    map<ll, vector<ll>> roads;
    ll n, m;
    cin >> n >> m;
    ll h[n];

    for(ll i = 0; i < n ; i++){
        scanf("%lld", &h[i]);
    }
    ll a[m], b[m];

    for(ll i = 0; i < m; i++) {
        scanf("%lld %lld", &a[i], &b[i]);
        roads[a[i]-1].push_back(b[i]-1);
        roads[b[i]-1].push_back(a[i]-1);
    }

    ll ans = 0;

    for(ll i = 0; i < n; i++ ) {
        if(roads[i].size() == 0) {
            //道なし
            ans++;
        } else {
            vector<ll> rds = roads[i]; 
            for(ll j=0; j<rds.size();j++) { 
                if(h[i]<=h[rds[j]]){
                    break;
                }
                if(j==rds.size()-1){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}