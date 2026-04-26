#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long x,y;
        cin >> x >> y;
        if(y/x > 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}