#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            long cnt=0;
            while(n%i==0){
                n=n/i;
                cnt++;
            }
            cout<<i<<" "<<cnt<<endl;
        }
    }
    if (n>1) cout<<n<<" 1"<<endl;
}
