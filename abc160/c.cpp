#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    int temp = 0;
    pair<int, int> p;
    int A[n];
    REP(i, n) {
        scanf("%d", &A[i]);
        if(i > 0) {
            if(temp < A[i] - A[i - 1]) {
                p.first = A[i-1];
                p.second = A[i];
                temp = A[i] - A[i - 1];
            }
        }
    }
    if(temp < A[0] + k-A[n - 1]) {
        cout << k-(A[0]+k-A[n-1]) << endl;
        return 0;
    }

    cout << k - (p.second - p.first) << endl;
}