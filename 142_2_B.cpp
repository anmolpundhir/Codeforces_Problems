#include<bits/stdc++.h>
using namespace std;
bool is_prime(long long n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(sqrt(n)==(long long)sqrt(n) && is_prime(sqrt(n))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}