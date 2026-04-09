#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x=ceil((double)n/2);
        for(int i=1;i<=n;i++){
            cout << x << " ";
            if(i%2==1) x+=i;
            else x-=i;
        }
    }
    return 0;
}