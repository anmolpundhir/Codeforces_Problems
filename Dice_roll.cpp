#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        int cnt=0;
        int i=0;
        while(i<n-1){
            if(arr[i+1]==arr[i] || arr[i+1]+arr[i]==7){
                cnt++;
                i+=2;
            }
            else i++;
        }
        cout << cnt << endl;
    }
    return 0;
}