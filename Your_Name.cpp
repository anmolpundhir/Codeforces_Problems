#include<iostream>
#include<unordered_map>
using namespace std;
void isvalid(string s,string t,int n){
    unordered_map<char,int> mpp;
    for(auto c:t){
        mpp[c]++;
    }
    for(auto c:s){
        if(mpp[c]<1) {
            cout << "NO" << endl;
            return;
        }
        mpp[c]--;
    }
    for(auto it:mpp){
        if(it.second !=0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return ;
}
int main(){
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int n;
        cin >> n;
        string s,t;
        cin >> s >> t;
        isvalid(s,t,n);
    }
    return 0;
}