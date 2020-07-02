#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

ll gcd(ll x, ll y) {
    if(y > x)
        swap(x, y);
    while(true) {
        int z = x % y;
        if(z == 0)
            return y;
        x = y;
        y = z;
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
}