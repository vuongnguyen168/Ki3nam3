#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long k,n;
		cin>>k>>n;
		vector<long>a;
		while(k--){
			for(long i=0;i<n;i++){
				long x;
				cin>>x;
				a.push_back(x);
			}
		}
		sort(a.begin(),a.end());
		for(auto x: a){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

