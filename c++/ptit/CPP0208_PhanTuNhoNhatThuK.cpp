#include<bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		vector<long>v;
		long n,k;
		cin>>n>>k;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			v.push_back(x);
		}
		
		sort(v.begin(),v.end());
		cout<<v[k-1]<<endl;
	}
}
//2
//6 3
//7 10 4 3 20 15
//6 4 
//9 7 12 8 6 5
