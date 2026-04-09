#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> ind;
        vector<int> ind2;
        for(int i=0;i<n;i++){
            if(s[i]=='1') ind.push_back(i+1);  
            else ind2.push_back(i+1);
        }
        if(ind.size()==0){
            cout << 0 << endl;
        }
        else if(ind.size()%2!=0){
            if(ind2.size()%2==0) cout << -1 << endl;
            else{
                cout << ind2.size() << endl;
                for(auto x:ind2) cout << x << " ";
                cout << endl;
            }
        }
        else{ 
            cout << ind.size() << endl;
            for(auto x:ind) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}