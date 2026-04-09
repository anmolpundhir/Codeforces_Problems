#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(3*n,-1);
        int cnt=3*n;
        for(int i=3*n-1;i>=0;i-=3){
            arr[i]=cnt;
            arr[i-1]=cnt-1;
            cnt-=2;
        }
        cnt=1;
        for(int i=0;i<3*n;i+=3){
            arr[i]=cnt++;
        }
        for(int i=0;i<3*n;i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}