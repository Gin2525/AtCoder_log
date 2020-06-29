#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main(){
    // 制約見て！！！デカかったらlong longにすること！
    int n;
    cin >> n;
    while(n != 0){
        if(n %10 == 7){
            cout << "Yes"<<endl;
            return 0;
        }else{
            n /= 10;
        }
    }
    cout<<"No"<<endl;
}   