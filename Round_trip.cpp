#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int R,X,D,n;
        cin >> R >> X >> D >> n;
        string s;
        cin >> s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt++;
                R-=D;
            }
            else{
                if(R<X){
                    cnt++;
                    R-=D;
                }
            }
            if(R<0) R=0;
        }
        cout << cnt << endl;
    }
    return 0;
    
}