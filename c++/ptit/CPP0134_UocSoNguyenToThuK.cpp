#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		vector<long> a;
		long n,k;
		cin>>n>>k;
		for (long i=2;i<=sqrt(n);i++){
			if (n%i==0){
				while(n%i==0){
					a.push_back(i);
					n=n/i;
				}
			}
			
		}
		if(n>1){
			a.push_back(n);
		}
		if(k<=a.size()) cout<<a[k-1]<<endl;
		else cout<<"-1"<<endl;
	}
	
}
