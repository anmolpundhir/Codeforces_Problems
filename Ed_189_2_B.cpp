#include<bits/stdc++.h>
using namespace std;
bool valid(string s){
    int n = s.size();
    if(n<=3) return true;
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]) cnt++;
    }
    return cnt<=2;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(valid(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}