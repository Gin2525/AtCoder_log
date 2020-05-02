#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int n, m, q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int> vec){
    if(vec.size()==n+1){
        int sum_point=0;
        rep(i,q){
            if(vec[b[i]]-vec[a[i]]==c[i]){
                sum_point += d[i]; 
            }
        }
        ans = max(ans,sum_point);
        return ;
    }
    vec.push_back(vec.back());
    while(vec.back()<=m){
        dfs(vec);
        vec.back()++;
    }
}

int main() {
    cin >> n >> m >> q;
    a = b = c = d = vector<int>(q);
    rep(i, q) { cin >> a[i] >> b[i] >> c[i] >> d[i]; }
    
    dfs(vector<int>(1,1));
    cout << ans << endl;
}