#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
long long combi(long long n, long long k) {
    map<string, long long> memo;
    if(n == k || k == 0)
        return 1;
    else {
        std::string key = std::to_string(n) + std::to_string(k);
        if(memo.count(key) != 0) {
            return memo[key];
        } else {
            long long out = combi(n - 1, k - 1) + combi(n - 1, k);
            memo[key] = out;
            return out;
        }
    }
}

int main() {
    int N;
    long long count;
    cin >> N;
    int A[N];
    int balls_num[N];
    long long counts[N];

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        balls_num[i] = 0;
    }

    for(int i = 0; i < N; i++) {
        balls_num[A[i] - 1]++;
    }
    for(int j = 0; j < N; j++) {
        if(balls_num[j] >= 2) {
            counts[j] = combi(balls_num[j], 2);
        } else {
            counts[j] = 0;
        }
    }
    for(int i = 0; i < N; i++) {
        count = 0;
        int k = A[i];
        for(int j = 0; j < N; j++) {
            if(k-1==j) {
                if(balls_num[k-1]>=3){
                    count += combi(balls_num[k-1]-1,2);
                }
            } else {
                count += counts[j];
            }
        }
        cout << count << endl;
    }
}