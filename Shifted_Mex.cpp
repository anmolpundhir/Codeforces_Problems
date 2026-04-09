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
        vector<int> nums(n);
        for(int i=0;i<n;i++) cin >> nums[i];
        sort(nums.begin(),nums.end());
        int cnt=1;
        int ans=0;
        for(int i=0;i<n-1;i++){
           if(nums[i+1]-nums[i]==1){
            cnt++;
           }
           else if(nums[i+1]==nums[i]) continue;
           else{
            ans=max(ans,cnt);
            cnt=1;
           }
        }
        ans=max(ans,cnt);
        cout << ans << endl;
    }
    return 0;
}