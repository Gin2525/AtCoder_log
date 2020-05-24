#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    // 制約見て！！！デカかったらlong longにすること！
    int n;
    ll r=0,g=0,b=0;
    string s;
    cin >> n >> s;
    rep(i, n) {
        if(s[i] == 'R')
            r++;
        else if(s[i] == 'G')
            g++;
        else if(s[i] == 'B')
            b++;
    }
    ll total = r * g * b;

    rep(j, n) rep(i, j) {
        int k = j + (j - i);
        if(k < n) {
            if(s[i] == s[j])
                continue;
            if(s[j] == s[k])
                continue;
            if(s[i] == s[k])
                continue;
            total--;
        }
    }
    cout << total << endl;
    return 0;
}