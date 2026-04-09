#include<bits/stdc++.h>
using namespace std;
vector<long long> primes;
bool is_Prime[150000+1];
void sieve(){
    for(int i=0;i<=150000;i++) is_Prime[i]=true;
    is_Prime[0]=is_Prime[1]=false;
    for(int i=2;i*i<=150000;i++){
        if(is_Prime[i]){
            for(int j=i*i;j<=150000;j+=i) is_Prime[j]=false;
        }
    }
    for(int i=2;i<=150000;i++){
        if(is_Prime[i]) primes.push_back(i);
    }
}

int main(){
    int t;
    cin >> t;
    sieve();
    while(t--){
        int n;
        cin >> n;
        cout << primes[0] << " ";
        for(int i=1;i<n;i++){
            long long a_i=primes[i-1]*primes[i];
            cout << a_i << " ";
        }
        cout << endl;
    }
    return 0;
}