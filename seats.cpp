#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans=0;
        vector<int> ones;
        ones.push_back(-1);
        for(int i=0;i<n;i++){
           if(s[i]=='1'){
            ans++;
            ones.push_back(i);
           }
        }
        ones.push_back(n);
        int l=0;
        while(l<ones.size()-1){
            int zeroes=ones[l+1]-ones[l]-1;
            if(l==0 && l==ones.size()-2) zeroes-=0;
            else if(l==0 || l==ones.size()-2) zeroes-=1;
            else zeroes-=2;
            if(zeroes>0) ans+= ceil((double)zeroes/3);
            l++;
        }
        cout << ans << endl;
    }
    return 0;
}