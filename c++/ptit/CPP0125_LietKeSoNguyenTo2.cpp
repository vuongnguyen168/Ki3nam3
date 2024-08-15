#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
    if(n<2) return false;
    for (long long i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        for(long long i=a;i<=b;i++){
            if(check(i)) cout<<i<<" ";
        }
        cout<<endl;
    }

//    cout<<endl;
}
