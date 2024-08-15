#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		long n,k;
		vector<long>v;
		cin>>n>>k;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			v.push_back(x);
		}
		if(count(v.begin(),v.end(),k)!=0){
			cout<<"1"<<endl;	
		}
		else cout<<"-1"<<endl;
	}
	
}

