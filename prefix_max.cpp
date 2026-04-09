#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            maxi=max(maxi,x);
        }
        long long ans=maxi*n;
        cout << ans << endl;
    }
    return 0;
}