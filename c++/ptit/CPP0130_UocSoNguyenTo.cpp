#include<bits/stdc++.h>
using namespace std;
bool check(long n){
    if(n<2) return false;
    for (long i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        for (long long i=2;i<=sqrt(n);i++){
            if(n%i==0){
                while(n%i==0){
                    n=n/i;
                    cout<<i<<" ";
                }
            }
        }
        if(n>1) cout<<n;
        cout<<endl;
    }
}

