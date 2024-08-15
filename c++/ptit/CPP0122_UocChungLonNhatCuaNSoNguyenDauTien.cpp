#include<bits/stdc++.h>
using namespace std;
long gcd(long a,long b){
    while(b!=0){
        long temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
long lcm(long a,long b){
    return (a*b)/gcd(a,b);
}
long check(long n){
    long ans=1;
    for(long i=2;i<=n;i++){
        ans=lcm(ans,i);
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<check(n)<<endl;
    }
}
