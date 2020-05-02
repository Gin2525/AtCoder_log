#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main(){
    // 制約見て！！！デカかったらlong longにすること！
    int a,b;
    cin >> a>>b;
    for(int i = 1; i < 1010 ; i++){
        int tmp = i*0.08;
        int tmp2 = i*0.1;
        if(tmp==a&&tmp2==b){
            cout << i << endl;
            return 0;
        } 
    }
    cout << -1 << endl;
}