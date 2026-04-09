#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> arr(7);
        for(int i=0;i<7;i++) cin >> arr[i];
        long long sum=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<6;i++) sum+=(-1*arr[i]);
        sum+=arr[6];
        cout << sum << endl;
    }
    return 0;
}