#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    // 制約見て！！！デカかったらlong longにすること！
    int n;
    cin >> n;
    vector<int> t(n+1);
    vector<int> x(n+1);
    vector<int> y(n+1);
    t[0] = x[0] = y[0] = 0;

    rep(i, n) { cin >> t[i + 1] >> x[i + 1] >> y[i + 1]; }
    int dist ,dt;
    for(int i = 1; i <= n; i++) {
        dist = abs(x[i]-x[i-1]) + abs(y[i]-y[i-1]);
        dt = t[i]-t[i-1];
        if(dist > dt){
            cout << "No" << endl;
            return 0;
        }else if(dist%2 != dt%2){
            cout <<"No" << endl;
            return 0;
        }
    }
    cout << "Yes"<<endl;

}