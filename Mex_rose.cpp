#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n , k;
        cin >> n >> k;
        vector<int> nums(n);
        for(int j=0;j<n;j++){
            cin >> nums[j];
        }
        vector<int> present(k+1,0);
        for(int j=0;j<n;j++){
            if(nums[j]<=k) {
                present[nums[j]]++;
            }
        }
        int cnt=0;
        for(int j=0;j<k;j++){
            if(!present[j]) cnt++;
        }
        if(present[k]>cnt) cnt+=(present[k]-cnt);
        cout << cnt << endl;
    }
    return 0;
}