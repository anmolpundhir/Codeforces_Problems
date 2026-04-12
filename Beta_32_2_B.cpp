#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n=s.length();
    string ans="";
    int i=0;
    while(true){
        if(s[i]=='.'){
            ans.push_back('0');
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            ans.push_back('1');
            i+=2;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            ans.push_back('2');
            i+=2;
        }
        if(i>=n) break;
    }
    cout << ans << endl;
    return 0;
}