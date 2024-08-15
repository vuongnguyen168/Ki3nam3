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
		cout<<sum<<endl;
	}
}
