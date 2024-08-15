#include<bits/stdc++.h>
using namespace std;
bool check(long n){
    if(n<2){
        return false;
    }
    for (long i=2;i<=sqrt(n);i++){
        if (n%i==0) return false;
    }
    return true;
}
int main(){
    long n;
    cin>>n;
    if (check(n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
