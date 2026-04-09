#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;
int get_parent(int x){
    while(x%2==0) x/=2;
    return x;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n+1);
        for(int i=1;i<n+1;i++) cin >> arr[i];
        bool sorted=true;
        for(int i=1;i<=n;i++){
            if(get_parent(i)!=get_parent(arr[i])){
                sorted=false;
                break;
            }
        }
        cout << (sorted?"YES":"NO") << endl;
    }
    return 0;
}