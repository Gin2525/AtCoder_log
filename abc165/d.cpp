#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

long long f(long long a, long long b, long long x) {
    return a * x / b - a * (x / b);
}

int main() {
    long long a, b, n;
    cin >> a >> b >> n;
    long long x = min(n, b - 1);
    cout << f(a, b, x) << endl;
}