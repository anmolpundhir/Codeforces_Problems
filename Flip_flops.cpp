#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,f;
        cin >> n >> k >> f;
        long long c=k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]<=c){
                if(f>=c-arr[i]){
                    f-=(c-arr[i]);
                    c=(long long)(c+c);
                }
                else if(f>0){
                    c=(long long)(c+arr[i]+f);
                    f=0;
                }
                else {
                    c=(long long)(c+arr[i]);
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}