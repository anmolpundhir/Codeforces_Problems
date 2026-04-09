#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin >> arr[i];
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int cnt1=0,cnt2=0;
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i]) cnt1++;
                else if(arr[j]<arr[i]) cnt2++;
            }
            ans[i]=max(cnt1,cnt2);
        }
        for(int i=0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
    }
}