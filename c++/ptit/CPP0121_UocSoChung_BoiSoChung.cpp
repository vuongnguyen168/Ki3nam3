#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
long long lcm(long long a,long long b){
    return (a*b)/gcd(a,b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        cout<<lcm(a,b)<<" "<<gcd(a,b)<<endl;
    }
}
//2
//5    10
//14  8
