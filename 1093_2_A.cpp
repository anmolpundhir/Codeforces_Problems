#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >>n;
       vector<int> arr(n);
       vector<int> freq(101,0);
       bool possible=true;
       for(int i=0;i<n;i++){
           cin >> arr[i];
           freq[arr[i]]++;
           if(freq[arr[i]]>1){
               possible=false;
           }
       } 
       if(possible){
        sort(arr.begin(),arr.end());
        for(int i=n-1;i>=0;i--){
            cout << arr[i] << " ";
        }
        cout << endl;
       }
       else {
        cout << -1 << endl;
       }
    }
    return 0;
}