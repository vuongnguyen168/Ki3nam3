#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long cnt=0;
		for(long i=1;i<=sqrt(n);i++){
			if(n%i==0){
				if(i%2==0){
					cnt++;
				}
				if(i!=(n/i)&&(n/i)%2==0){
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
}
