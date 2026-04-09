#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void isvalid(vector<int>& nums,int n){
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        if(mpp.find(nums[i])!=mpp.end()){
            cout << "YES" << endl;
            return;
        }
        mpp[nums[i]]++;
    }
    cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin >> nums[i];
        }
        isvalid(nums,n);
    }
    return 0;
}