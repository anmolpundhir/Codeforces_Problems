#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int p;
        cin >> p;
        p-=1;
        int cnt1=0,cnt2=0;
        for(int i=0;i<p;i++){
            if(a[i]!=a[i+1]) cnt1++;
        }
        for(int i=p;i<n-1;i++){
            if(a[i]!=a[i+1]) cnt2++;
        }
        int ans=max(cnt1,cnt2);
        if(ans%2==0) cout << ans << endl;
        else cout << ans+1 << endl;
    }
    return 0;
}