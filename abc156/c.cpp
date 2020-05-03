#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main(){
    // 制約見て！！！デカかったらlong longにすること！
    int n;
    cin >> n;
    int a[n];
    int max,min;
    max = -1;
    min = INT32_MAX;
    int p=0;
    rep(i,n){
        scanf("%d",&a[i]);
        if(a[i]>max){
            max = a[i];
        }

        if(a[i]<min){
            min = a[i];
        }

    }

    int sum_min=INT32_MAX;
    rep(i,101){
        int sum = 0;
        rep(j,n){
            int tmp = (a[j]-i);
            sum += tmp*tmp;
        }
        sum_min = std::min(sum,sum_min);
    }
    cout << sum_min<<endl;
}