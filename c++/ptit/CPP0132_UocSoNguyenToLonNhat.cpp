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
        long n;
        cin>>n;
        long s;
        for (long i=2;i<=sqrt(n);i++){
            if(n%i==0){
                while(n%i==0){
                    s=i;
                    n=n/i;
//                    s=i;
                }
            }
        }
        if(n>1) s=n;
        cout<<s<<endl;
    }
}


