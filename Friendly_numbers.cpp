#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int find(int n){
    int cnt=0;
    for(int i=n+1;i<=n+100;i++){
        if(i-sum(i)==n) cnt++;    
    }
    return cnt;
}
int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans=find(n);
        cout << ans << endl;
    }
    return 0;
}