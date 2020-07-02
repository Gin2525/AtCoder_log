#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

bool is_prime(int n) {
    int d = (int)sqrt(n);
    for(int i = 2; i <= d; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
