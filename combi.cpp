#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

ll fact(ll n) {
    if(n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}

std::vector<std::vector<ll>> comb(int n, int r) {
    std::vector<std::vector<ll>> v(n + 1,
                                          std::vector<ll>(n + 1, 0));
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

ll combi(ll n, ll k) { return fact(n) / (fact(k) * fact(n - k)); }

int main() { 
    vector<vector<ll>> vec = comb(30,15);
    cout << vec[30][15] << endl; }