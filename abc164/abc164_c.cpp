#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main(){
    int n,cnt=0;
    cin >> n;
    string f;
    string s[n];
    map<string,bool> dict;
    REP(i,n){
        cin >> f;
        if(dict[f]==false){
            cnt++;
            dict[f] = true;
        }
    }
    cout << cnt << endl;
}