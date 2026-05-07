#include<bits/stdc++.h>
using namespace std;
int take_one(int ind,vector<int>& arr,int n){
     vector<int> seen(n,0);
     int i=ind,j=ind;
     while(i>=0 && j<2*n){
        if(arr[i]!=arr[j]) break;
        seen[arr[i]]=1;
        i--;
        j++;
     }
     for(int k=0;k<n;k++){
        if(seen[k]==0) return k;
     }
     return n;
}
int take_two(int ind1,int ind2,vector<int>& arr,int n){
    vector<int> seen(n,0);
    int i=ind1,j=ind2;
    bool is_palindrome=true;
    while(i<=j){
        if(arr[i]!=arr[j]) {
            is_palindrome=false;
            break;
        }
        seen[arr[i]]=1;
        i++;j--;
    }
    if(!is_palindrome) return 1;
    if(is_palindrome){
        int l=ind1,r=ind2;
        while(l>=0 && r<2*n){
            if(arr[l]!=arr[r]) break;
            seen[arr[l]]=1;
            l--;
            r++;
        }
    }
    for(int k=0;k<n;k++){
        if(seen[k]==0) return k;
    }   
    return n;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(2*n);
        int ind1=-1,ind2=-1;
        for(int i=0;i<2*n;i++) {
            cin >> arr[i];
            if(arr[i]==0){
                if(ind1==-1) ind1=i;
                else ind2=i;
            }
        }
        int ans=max({take_one(ind1,arr,n),take_one(ind2,arr,n),take_two(ind1,ind2,arr,n)});
        cout << ans << endl;
    }
    return 0;
}