#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long n,k;
		cin>>n>>k;
		long sum=0;
		for(long i=1;i<=n;i++){
			sum+=i%k;
		}
		if (sum==k){
			cout<<"1"<<endl;
		}
		else cout<<"0"<<endl;
//		cout<<sum<<endl;
	}
}
