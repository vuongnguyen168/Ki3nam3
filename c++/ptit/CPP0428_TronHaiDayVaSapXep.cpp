#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long m,n;
		cin>>m>>n;
		vector<long>a;
//		vector<long>b;
		
		for(long i=0;i<m;i++){
			long x;
			cin>>x;
			a.push_back(x);
		}
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			a.push_back(x);
		}
		
		sort(a.begin(),a.end());
		for(auto x: a){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

