#include<iostream>
#include<vector>
#include<algorithm>
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
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++) mpp[arr[i]]=i;
        vector<int> temp = arr;
        sort(temp.begin(),temp.end(),greater<int>());
        int l=-1, r=-1;
        for(int i=0;i<n;i++){
            if(arr[i]!=temp[i]){
                l=i;
                r=mpp[temp[i]];
                break;
            }
        }
        reverse(arr.begin()+l,arr.begin()+r+1);
        for(auto x:arr) cout << x << " ";
    }
    return 0;
}