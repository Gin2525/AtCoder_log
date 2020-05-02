#include <bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main(){
    int cnt=0;
    string s;
    cin >> s;
    int work,ints;
    ints = atoi(s.c_str());
    

    // for(int i=0;i<=s.length()-4;i++) {
    //     int add = 4;
    //     while(i+add<=s.length()){
    //         string sub = s.substr(i,add);
    //         work = atoi(sub.c_str());
    //         if(work%2019==0){
    //             cnt++;
    //         }
    //         add++;
    //     }
    // }
    while(ints>=2019){
        if(ints%2019==0){
            cnt ++;
            ints-=2019;
        }
        ints-=2019;
    }

    cout<<cnt<<endl;

}