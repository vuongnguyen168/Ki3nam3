#include<bits/stdc++.h>
using namespace std;
long long check(long long n){
    long long x=0;
    while(n>0){
        x+=n%10;
        n=n/10;
    }
    return x;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        while(n>=10){
            n=check(n);
        }
        cout<<n<<endl;
    }
}



