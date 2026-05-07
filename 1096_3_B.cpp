#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        stack<char> st;
        for(auto c:s){
            if(st.empty()) st.push(c);
            else if(st.top() != c) st.pop();
            else st.push(c);
        }
        if(st.size()==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
