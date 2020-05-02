#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

int main() {
    int n, m, cnt = 0, sum = 0;
    scanf("%d %d", &n, &m);
    int a[n];
    REP(i,n) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    for(int i = 0; i < n; i++) {
        if(a[i] >= sum * 1.0 / (4 * m)) {
            cnt++;
            if(cnt == m) {
                printf("Yes\n");
                return 0;
            }
        }
    }
    cout << "No" << endl;
}