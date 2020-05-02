#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans;
    
    if(a+b!=0){
        ll tmp = n / (a + b);
        ans = tmp*a;
    }else{
        cout<<0<<endl;
        return 0;
    }

    ll r = n%(a+b);
    ans += min(a,r);
    cout<<ans<<endl;

    return 0;
}