#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        vector<int> ans(n);
        int k=0,l=n-1;
        for(int i=0.;i<n;i++){
            if(arr[i]%6==0) ans[k++]=arr[i];
            else if(arr[i]%3==0) ans[l--]=arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0 && arr[i]%3!=0) ans[k++]=arr[i];
            else if(arr[i]%2!=0 && arr[i]%3!=0) ans[l--]=arr[i];
        }
        for(int i=0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}