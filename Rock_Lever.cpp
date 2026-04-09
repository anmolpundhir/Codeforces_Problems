#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        vector<int> bits(32,0);
        for(auto x:arr){
            int bit=__builtin_clz(x);
            bits[bit]++;
        }
        long long ans=0;
        for(int i=0;i<32;i++){
            ans+= (long long)bits[i]*(bits[i]-1)/2;
        }
        cout << ans << endl;
    }
    return 0;
}