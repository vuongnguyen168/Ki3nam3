#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long n,q;
		cin>>n>>q;
		vector<long>v;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			v.push_back(x);
		}
		while(q--){
			long l,r;
			cin>>l>>r;
			long sum=0;
			for(long i=l-1;i<r;i++){
				sum+=v[i];
			}
			cout<<sum<<endl;
		}
	}
	
}
