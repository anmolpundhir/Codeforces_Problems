#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> freq(n*n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x;
                cin >> x;
                freq[x]++;
            }
        }
        bool valid = true;
        for(int i=1;i<=n*n;i++){
            if(freq[i]>(n*n-n)){
                valid=false;
                break;
            }
        }
        cout << (valid?"YES":"NO") << endl;
    }
    return 0;
}