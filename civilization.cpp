#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        int ans=1;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++) {
            if(!mpp.count(arr[i])) mpp[arr[i]]=i;
        }    
        int last=0;
        for(int i=1;i<n;i++){
            if(mpp.count(arr[i]-1) && mpp[arr[i]-1]<i && mpp[arr[i]-1]>=last) continue;
            else {
                last=i;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}