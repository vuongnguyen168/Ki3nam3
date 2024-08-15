#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long n,m;
		cin>>n>>m;
		vector<long>a;
		vector<long>b;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			a.push_back(x);
		}
		sort(a.begin(),a.end());
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			b.push_back(x);
		}
		sort(b.begin(),b.end());
		cout<<a[a.size()-1]*b[0]<<endl;
	}
}
