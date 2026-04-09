#include<string>
#include<algorithm>
#include<unordered_map>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]==s[(i+1)%n]) continue;
            cnt++;
        }
        int ans=min(cnt+1,n);
        cout << ans << endl;
    }
    return 0;
}