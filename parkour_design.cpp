#include<iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int c1=x-2*y;
        int c2=x+4*y;
        if(c1>=0 && c2>=0 && c1%3==0 && c2%3==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}