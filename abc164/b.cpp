#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    while(true) {
        c -= b;
        if(c <= 0) {
            cout << "Yes" << endl;
            break;
        }

        a -= d;
        if(a <= 0) {
            cout << "No" << endl;
            break;
        }
    }
}