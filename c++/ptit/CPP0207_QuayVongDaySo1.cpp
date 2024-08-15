#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long n,d;
		cin>>n>>d;
		vector<long>v;
		vector<long>m;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			v.push_back(x);
		}
		for(long i=0;i<d;i++){
			m.push_back(v[i]);
		}
		v.erase(v.begin(),v.begin()+d);
		for(auto x:v){
			cout<<x<<" ";
		}
		for(auto x:m){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
