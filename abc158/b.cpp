#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N,A,B,roop_count;
    cin >> N;
    cin >> A;
    cin >> B;

    if(A==0){
        cout << 0 << endl;
        return 0;
    }    

    roop_count = N/(A+B);
    vector<int> balls; 
    for (int i=0;i<roop_count;i++){
       balls.insert(balls.begin(),B);
       balls.push_back(A);
       
    }
    int ans=0;
    for (int i=0;i<roop_count*2; i+=1){
       cout << balls.at(i); 
    }
    cout << ans; 
    return 0;
}