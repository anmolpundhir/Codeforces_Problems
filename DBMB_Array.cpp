#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,x;
        cin >> n >> s >> x;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        long long sum=0;
        for(int i=0;i<n;i++) sum+=arr[i];
        if(sum<=s && (s-sum)%x==0) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}