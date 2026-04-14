#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       long long p, q;
       cin >> p >> q;
       long long S = p+2*q;
       long long K = 2*S+1;
       bool found = false;
       for (long long A=3; A*A <= K; A+=2) {
          if (K%A == 0) {
            long long B = K/A;
            long long n = (A-1)/2;
            long long m = (B-1)/2;
            if (n > 0 && m > 0) {
                long long max_q = min(n*(m+1),m*(n+1)); 
                if (q <= max_q) {
                    cout << n << " " << m << endl;
                    found = true;
                    break;
                }
            }
          }
        }
        if(!found) {
        cout << -1 << "\n";
        }
    }
    return 0;
}
